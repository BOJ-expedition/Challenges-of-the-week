// https://www.acmicpc.net/problem/1018

// import fs = require("fs");
// const input:string[] =  fs.readFileSync("/dev/stdin").toString().trim().split("\n").map(elem=>elem.trim());

const input:string[] = `8 8
WWBWBWBW
WBWBWBWB
BWBWBWBW
WBWBWBWB
BWBWBWBW
WBWBWBWB
BWBWBWBW
WBWBWBWB
`.toString().trim().split("\n").map(elem=>elem.trim());


const getWrongCntFrom = (y:number, x:number) :number=> {
    const startValue :string = board[y][x];
    const isOdd :number = (y+x)%2;

    let cnt :number = 0;

    for(let i=y; i<y+8; i++){
        for(let j=x; j<x+8; j++){
            if( (i+j)%2 === isOdd){
                if(board[i][j] !== startValue) cnt++;
            }
            else{
                if(board[i][j] === startValue) cnt++;
            }
        }

    }

    return Math.min(64-cnt, cnt);
}

const [yLength, xLength] : number[] = input.shift().split(" ").map(elem=>+elem);
const board : string[][] = input.map( elem=>elem.split(""));

let minCnt:number = 64;

for(let y=0; y<yLength-7; y++){
    for(let x=0; x<xLength-7; x++){
        let wrongCountNow : number = getWrongCntFrom(y,x);
        minCnt = Math.min(minCnt, wrongCountNow);
    }
}

console.log(minCnt);