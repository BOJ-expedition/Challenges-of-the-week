// https://www.acmicpc.net/problem/1550

// 내장함수중에 parseInt 쓰면 알아서 계산해주더라. 헛짓거리함...
import fs = require("fs");
const input : string = fs.readFileSync("/dev/stdin").toString().trim();
const toDecimal  = (char : string) : number => {
    let arr : number[] = [+char];
    const unicode = char.charCodeAt(0);
    if(unicode>=65) {
        arr = (unicode-55).toString().split("").map(elem=>+elem);
    }
    return +arr.join("");
}

let number = 0;

for(let i=input.length-1; i>=0; i--){
    const char = input[i];
    number += toDecimal(char)*Math.pow(16, input.length-i-1);
}

console.log(number);