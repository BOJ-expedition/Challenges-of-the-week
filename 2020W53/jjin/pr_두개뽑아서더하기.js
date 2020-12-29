//https://programmers.co.kr/learn/courses/30/lessons/68644

function solution(numbers) {
    const args = numbers;
    let tmpArr = [];

    for(let i=0; i<args.length; i++){
        for(let j=0; j<args.length; j++){
            if(i!==j) tmpArr.push(args[i] + args[j]);
        }
    }
    return [...new Set(tmpArr)].sort((a,b)=>+a-+b);
}