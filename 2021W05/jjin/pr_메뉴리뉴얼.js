// https://programmers.co.kr/learn/courses/30/lessons/72411

function solution(orders, course) {

    const powerSet=(target)=>{

        const finder=(now, rest, ret)=>{
            if(!now && !rest) return;

            if(!rest){
                ret.push(now);
            }
            else{
                finder(now + rest[0], rest.slice(1), ret);
                finder(now, rest.slice(1), ret);
            }

            return ret;
        }

        return finder("", target, []);
    }

    const menus = orders.map(
        elem => powerSet( elem.split("")
                        .sort( (a,b)=>a.localeCompare(b) )
                        .join("")
                )
    );

    let answer = [];

    for(const menuLength of course){

        const countingObject = {};

        for(let index=0; index<menus.length; index++){

            const nCr = menus[index].filter( elem=>elem.length===menuLength);

            for(let i=0; i<nCr.length; i++){
                const str = nCr[i];
                if(countingObject[str])
                    countingObject[str]++;
                else
                    countingObject[str] = 1;
            }
        }

        let maxValueArray = [];
        let maxValue = 1;

        for(const key in countingObject){
            if(countingObject[key] > maxValue){
                maxValueArray = [key];
                maxValue = countingObject[key];
            }
            else if(maxValueArray.length && countingObject[key] === maxValue){
                maxValueArray.push(key);
            }
        }

        maxValueArray.forEach( elem=>{answer.push(elem)});

    }

    return answer.sort( (a,b)=>a.localeCompare(b) )
}

console.log(solution(["ABCFG", "AC", "CDE", "ACDE", "BCFG", "ACDEH"], [2, 3, 4]))
console.log(solution(["XYZ", "XWY", "WXA"], [2, 3, 4]))
console.log(solution(["ABCDEF", "AB", "CD", "ADE", "XYZ", "XYZ", "ACD"], [2, 3, 5]))