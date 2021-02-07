// https://www.acmicpc.net/problem/2675


import fs = require("fs");
const input = fs.readFileSync("/dev/stdin").toString();

const solution = (input:string) :void=>{
    const arr : string[][] = input.trim().split("\n").map( elem => elem.trim().split(" "));

    arr.shift();

    let str : string = "";

    for(let i=0; i<arr.length; i++){
        const number : number = +arr[i][0];
        const chars : string[] = arr[i][1].split("");

        for(let j=0; j<chars.length; j++){
            const char : string = chars[j];

            for(let z=0; z<number; z++){
                str+=char;
            }
        }

        str += "\n";
    }

    console.log(str.trim());
}

solution(input)

solution(`2
3 ABC
5 /HTP`)