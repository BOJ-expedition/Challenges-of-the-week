//https://www.acmicpc.net/problem/1546

const fs = require("fs");
const [length, input] = fs.readFileSync("/dev/stdin").toString().split("\n");

let subjects = input.trim().split(" ").slice(0,length);
const max = subjects.reduce( (a,b)=> Math.max(+a, +b) );

subjects.forEach( (elem, i, arr)=>{
    arr[i] = +arr[i] / max*100;
})
console.log(subjects.reduce( (a,b)=> +a + +b ) / +length);

