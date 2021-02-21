// https://www.acmicpc.net/problem/7568

// import fs = require("fs");
// const [InputLength, ...input]: string[] =  fs.readFileSync("/dev/stdin").toString().trim().split("\n");
const [InputLength, ...input]: string[] = `5
55 185
58 183
88 186
60 175
46 155`.toString().trim().split("\n");

const inputLength:number = +InputLength
const inputArray:number[][] = input.map(elem=>elem.split(" ").map(Number) )

let ret = [];
for(let i=0; i<inputLength; i++){
    let cnt = 1;
    for(let j=0; j<inputLength; j++){

        if(i===j) continue;

        if(inputArray[i][0] < inputArray[j][0] && inputArray[i][1] < inputArray[j][1])
            cnt++;
    }
    ret.push(cnt);
}
console.log(ret.join(" "));