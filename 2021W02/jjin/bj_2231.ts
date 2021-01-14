// https://www.acmicpc.net/problem/2231

// import fs = require("fs");
// const input = fs.readFileSync("/dev/stdin").toString();

const M:number = +"216".toString().trim()

const NtoM = (N:number):number=>{
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
    let firstValue = (NArr[0]-1) * Math.pow(10, NArr.length-1);
    let rst = 0;
    for(let i=firstValue; i<M; i++){
        const Nv=NtoM(i)
        if(Nv === M){
            rst = i;
            break;
        }
    }

    return rst;
}

console.log(MtoN(M))