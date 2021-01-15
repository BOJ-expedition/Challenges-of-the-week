// https://www.acmicpc.net/problem/2231

// import fs = require("fs");
// const M = fs.readFileSync("/dev/stdin").toString();

const M:number = +"1234".toString().trim()

const NtoM = (N:number) : number=>{
    const num : number = N;
    const arr:number[] = N.toString().split("").map(elem=>+elem);

    let M = 0;
    for(let i=0; i<arr.length; i++){
       M += arr[i];
    }

    return M+num;
}

const MtoN = (M:number) : number => {
    let NArr:number[] = M.toString().split("").map(elem=>+elem);
    let firstValue;

    if ( NArr[0]-1 > 0 )
        firstValue = (NArr[0]-1) * Math.pow(10, NArr.length-1);
    else
        firstValue = 9 * Math.pow(10, NArr.length-2);

    let N = 0;
    for(let n=firstValue; n<M; n++){
        const Nv=NtoM(n)
        if(Nv === M){
            N = n;
            break;
        }
    }

    return N;
}

console.log(MtoN(M))