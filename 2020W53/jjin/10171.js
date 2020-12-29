//const fs = require('fs'); // 파일시스템
let a = 10;
let b = 10;
for(let i=0; i<1000; i++){
    a *= 10;
    b *= 10;
}
console.log(a)
console.log(b)
//const arr = fs.readFileSync('/dev/stdin').toString().split(' '); //백준 인풋 파일 설정
let c = a+ " " + b;
const arr = c.split(" ");
const max = Math.floor(+arr[0] / +arr[1]); // 조건은 둘 다 10진수 정수라고 하는데 안되어서 Math.floor 넣어봤었음
const extra = +arr[0] % +max; // 나머지값`
console.log(max + '\n' + extra);