// https://www.acmicpc.net/problem/2609

// import fs = require("fs");
// const input : number[] = fs.readFileSync("/dev/stdin").toString().trim().split(" ").map(Number);
const input: number[] = "24 18".toString().trim().split(" ").map(Number);

const getDiv = (a: number, b: number) => {
    if (b === 0)
        return a
    else
        return getDiv(b, a % b)
}
let [a, b]: number[] = input

const div: number = getDiv(a, b)
const mul: number = a * b / div;

console.log(div + "\n" + mul)