// https://programmers.co.kr/learn/courses/30/lessons/72412?language=javascript

function solution(info, query) {
    let table = {};

    const setter = (object) => {
        const {lang, area, level, food, score} = object;
        const array = [lang, area, level, food];
        const idx = Math.floor(score/100);

        const set = (prev, arr) => {

            for (let i=0; i<arr.length; i++) {

                const string = prev + arr[i];

                if(table[string]){
                    if(table[string][idx])
                        table[string][idx].push(score);
                    else
                        table[string][idx] = [score];
                }
                else{
                    table[string] = [];

                    table[string][idx] = [score];
                }


                set(string, arr.slice(i + 1));
            }
        }

        set("", array);

        if(table["----"]){
            if(table["----"][idx])
                table["----"][idx].push(score);
            else
                table["----"][idx] = [score];
        }
        else{
            table["----"] = [];
            table["----"][idx] = [score];
        }
    }

    info.forEach( string => {

        const eachInformation = string.split(" ");

        setter({
            lang : eachInformation[0],
            area : eachInformation[1],
            level: eachInformation[2],
            food : eachInformation[3],
            score: eachInformation[4]
        });
    });

    let ret = [];

    let everCalledQuery = {};

    for (const queryString of query) {

        let stringArray = queryString.split(" ").filter(string=>string !== "and");
        const score = +stringArray.pop();

        let string = stringArray.filter(elem=>elem !== "-").join("");

        if(!string) string = "----";

        if(everCalledQuery[string+score]){
            ret.push(everCalledQuery[string+score]);
        }
        else{

            let count = 0;

            if(table[string]){
                const idx = Math.floor(score/100);
                for(let i=table[string].length; i>idx; i--) {
                    if(table[string][i]) count += table[string][i].length;
                }

                if(table[string][idx]){
                    for(let i=0; i<table[string][idx].length; i++){
                        if( +table[string][idx][i] >= score) count++;
                    }
                }
            }

            ret.push(count);

            everCalledQuery[string+score] = count;
        }
    }

    return ret;
}



console.log( solution([
        "java backend junior pizza 150",
        "python frontend senior chicken 210",
        "python frontend senior chicken 150",
        "cpp backend senior pizza 260",
        "java backend junior chicken 80",
        "python backend senior chicken 50"
    ],
    [
        "java and backend and junior and pizza 100",
        "python and frontend and senior and chicken 200",
        "cpp and - and senior and pizza 250",
        "- and backend and senior and - 150",
        "- and - and - and chicken 100",
        "- and - and - and - 150"
    ]
) )