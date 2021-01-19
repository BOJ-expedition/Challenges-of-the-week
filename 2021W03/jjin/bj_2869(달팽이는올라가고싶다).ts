// https://www.acmicpc.net/problem/2869

// import fs = require("fs");
// const [up, down, height]:number[] = fs.readFileSync("/dev/stdin").toString().trim().split(" ").map(elem=>+elem);

const [up, down, height]:number[] =`100 99 1000000000
`.toString().trim().split(" ").map(elem=>+elem);
console.log( Math.ceil( (height-down) / (up-down) ) )