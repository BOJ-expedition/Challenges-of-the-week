// https://www.acmicpc.net/submit/1008/24755638
const fs = require("fs");
const [a,b] = fs.readFileSync("/dev/stdin").toString().split(" ");
console.log(a/b);