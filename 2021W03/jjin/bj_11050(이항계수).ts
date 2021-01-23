// https://www.acmicpc.net/problem/11050

// import fs = require("fs");
// const [n, r]:number[] =  fs.readFileSync("/dev/stdin").toString().trim().split(" ").map( (elem)=>+elem );

const [n, r]:number[] = "10 0".toString().trim().split(" ").map( (elem)=>+elem );

let basement = {"0":1};
let base = 1;

for(let i=1; i<=n; i++){
    base *= i;
    basement[i] = base;
}

base = null;
console.log(basement[n] / ( basement[r] * basement[n-r] ));
