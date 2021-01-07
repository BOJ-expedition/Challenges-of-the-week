// https://www.acmicpc.net/problem/4153
//import fs = require("fs");
//const input : string = fs.readFileSync("/dev/stdin").toString().trim();
const input : string = `6 8 10
25 52 60
5 13 12
0 0 0`;
const arr : string[] = input.split("\n");
arr.pop();
let str = "";
const sqm = (number) => Math.pow(number,2);
for(let i=0; i<arr.length; i++){
    const [a,b,c] : number[] = arr[i].trim().split(" ").map(elem=>sqm(+elem)).sort( (a,b)=>a-b);
    if(a+b===c)         str += "right\n";
    else                str += "wrong\n";;
}
console.log(str.trim())