// https://www.acmicpc.net/problem/2775

// import fs = require("fs");
// const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");

interface Array<T> {
    fill(value: T, start?:number, end?: number): Array<T>;
}

Array.prototype.fill = function(value, start, end){
    if(!start) start=0;
    if(!end) end = this.length;

    for(let i=start; i<end; i++){
        this[i] = value;
    }
    return this;
}

const input = `2
1
3
2
3`.toString().trim().split("\n");


const caseLength = +input.shift();
const table : object[] = input.map( (elem,i,arr) => {
    return i%2 ? {targetFloor:+arr[i-1], targetSeq:+arr[i]} : null;
}).filter( (elem, idx)=>idx%2);

const calculate = (floor:number, seq:number) : number => {
    let arr : number[][] = [];

    arr[0] = new Array(seq)
        .fill(null)
        .map( (elem, idx)=>idx+1);

    for(let y=1; y<=floor; y++) {

        const prevY = y - 1;

        arr[y] = [1];

        for (let x = 1; x<seq; x++) {
            const prevX = x - 1;
            arr[y][x] = arr[prevY][x] + arr[y][prevX];
        }

    }

    return arr[floor][seq-1];
}

let str = "";

for(let i=0; i<caseLength; i++){
    str += calculate(table[i]["targetFloor"], table[i]["targetSeq"])  + "\n";
}

console.log(str.trim());