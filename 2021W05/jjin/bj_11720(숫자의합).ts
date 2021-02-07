
// import fs = require("fs");
// const input = fs.readFileSync("/dev/stdin").toString();

const solution =(input :string): number => {
    const [length, string] :string[] = input.trim().split("\n");

    const arr :number[] = string.trim().split("").map(elem=>+elem);

    return (arr.reduce( (a,b)=>a + b));
}

// console.log(solution(input))

console.log(solution(`1
1`))
console.log(solution(`5
54321`))
console.log(solution(`25
7000000000000000000000000`))
console.log(solution(`11
10987654321`))

