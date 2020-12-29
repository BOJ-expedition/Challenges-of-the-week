function solution(numbers) {
    const args = numbers;
    let tmpArr = [];

    for(let i=0; i<args.length; i++){
        for(let j=0; j<args.length; j++){
            if(i!=j){
                tmpArr.push(args[i] + args[j]);
            }
        }
    }

    let answer = [...new Set(tmpArr)].sort((a,b)=>+a-+b);
    return answer;
}