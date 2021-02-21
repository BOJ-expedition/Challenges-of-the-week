// https://www.acmicpc.net/problem/2751

// import fs = require("fs");
// const input : number[] = fs.readFileSync("/dev/stdin").toString().trim().split("\n").map(Number);
const input: number[] = `5
5
4
3
2
1`.toString().trim().split("\n").map(Number);

input.shift()
let tmp = {}
for(const key of input){
    if(tmp[key])continue
    tmp[key] = 1
}

let arr = [];
for(const key in tmp){
    arr.push(+key)
}
arr.sort( (a,b)=>a-b)
console.log(arr.join("\n"))