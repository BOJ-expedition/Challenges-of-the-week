// https://www.acmicpc.net/problem/1085
//import fs = require("fs");
//const input : string = fs.readFileSync("/dev/stdin").toString().trim();
const input : string = "6 2 10 3"; // 모듈 없으면 에러 표시 나서 임시값 암거나 넣어놓음
const [x,y,w,h] : number[] = input.split(" ").map(elem=>+elem);
const arr :number[] =[ Math.abs(x-0), Math.abs(y-0), Math.abs(w-x), Math.abs(y-h)]
let result = arr[0]
for(let i=1; i<arr.length; i++){
    result = Math.min(arr[i], result)
}
console.log(result)