// https://programmers.co.kr/learn/courses/30/lessons/72410?language=javascript

function solution(new_id) {
    const usableSChar = ["-", ".", "_"];
    let answer = new_id.toLowerCase().split("");
    let repeatedPoint = false;

    const deleteRepeatedThings = ({target, char ,index}) => {
        let isDeleted = false;
        if(target === char && repeatedPoint === true){
            answer.splice(index, 1);
            isDeleted=true
        }
        else if(target === char && repeatedPoint === false){
            repeatedPoint = true;
        }
        else if(repeatedPoint){
            repeatedPoint = false;
        }
        return isDeleted;
    }

    loop: for(let i=0; i<answer.length; i++){
        const charCode = answer[i].charCodeAt(0);

        if( (charCode >= 48 && charCode<=57) || (charCode>=97 && charCode<=122) )
            continue loop;

        for(const idx in usableSChar){
            if(answer[i] === usableSChar[idx])
                continue loop;
        }

        answer.splice(i, 1);
        i--;
    }

    for(let i=0; i<answer.length; i++){
        const deleteTarget = { target:answer[i], char:".", index:i };

        if( deleteRepeatedThings(deleteTarget) )
            i--;
    }

    if(answer[0] === ".")
        answer.splice(0, 1);
    if(answer[answer.length-1] === ".")
        answer.splice(answer.length-1, 1);

    if(!answer.length)
        answer[0] = "a";
    else if(answer.length>=16)
        if(answer[14]===".")
            answer = answer.slice(0, 14);
        else
            answer = answer.slice(0, 15);

    const lastChar = answer[answer.length-1];

    while(answer.length <= 2){
        answer.push(lastChar);
    }

    return answer.join("");
}

console.log(solution("z-+.^."));
console.log(solution("...!@BaT#*..y.abcdefghijklm"));
console.log(solution("=.="));
console.log(solution("123_.def"));
console.log(solution("abcdefghijklmn.p"));
