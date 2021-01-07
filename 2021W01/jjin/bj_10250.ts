//// https://www.acmicpc.net/problem/10250
//import fs = require("fs");
//const input : string = fs.readFileSync("/dev/stdin").toString().trim();

const input : string = `2
6 12 10
30 50 72`;
const testArr : string[] = input.split("\n");
const testLength : number = +testArr.shift().trim();
const solution=(string)=>{
    const [w, h, n] : number[] = string.split(" ").map(elem=>+elem);
    let idx = 0;

    for(let dy=1; dy<=h; dy++){
        for( let dx=1; dx<=w; dx++){
            idx++;
            if(idx === n){
                const currentRoom = (dx)*100+dy;
                return currentRoom.toString();
            }
        }
    };
}
let str = "";
for(let i=0; i<testLength; i++){
    str+=solution(testArr[i])+"\n";
}
console.log(str.trim());