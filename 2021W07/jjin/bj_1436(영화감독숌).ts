// https://www.acmicpc.net/problem/1436

// import fs = require("fs");
// const input : number = +fs.readFileSync("/dev/stdin").toString();

const input: number = 123

const solution = (number: number): string => {

    let idx: number = 0;
    let num: number = 665;
    while (idx !== number) {
        num++

        if (num.toString().indexOf("666") >= 0) {
            idx++
        }
    }

    return num.toString()

}

console.log(solution(input));