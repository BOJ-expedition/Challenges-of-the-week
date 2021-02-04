// https://www.acmicpc.net/problem/2920

// import fs = require("fs");
// const input = fs.readFileSync("/dev/stdin").toString();

const solution = (string:string):void => {
    const arr = JSON.stringify(string.split(" ").map(elem=>+elem));
    if (arr === "[1,2,3,4,5,6,7,8]")
        console.log("ascending");
    else if (arr === "[8,7,6,5,4,3,2,1]")
        console.log("descending");
    else
        console.log("mixed");
}
//solution(input)

solution(`1 2 3 4 5 6 7 8`)
solution(`8 7 6 5 4 3 2 1`)
solution(`8 1 7 2 6 3 5 4`)