// https://www.acmicpc.net/problem/2798
// import fs = require("fs");
// const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");


const input = `10 500
93 181 245 214 315 36 185 138 216 295`.toString().trim().split("\n");

const [cardLength, targetNumber]:number[] = input[0].split(" ").map(elem=>+elem);
const cards = input[1].split(" ").map(elem=>+elem);

let answer = 0;
for(let y=0; y<cards.length; y++){
    for(let x=0; x<cards.length; x++){
        for(let z=0; z<cards.length; z++) {
            if (y == x || y == z || x == z) continue

            const nowValue = cards[y] + cards[x] + cards[z];
            if ( nowValue >= answer && nowValue <= targetNumber) {
                answer = nowValue
            }
        }
    }
}

console.log(answer);