// https://www.acmicpc.net/problem/10814

// import fs = require("fs");
//const [_input_number_, ...input]: string[] = fs.readFileSync("/dev/stdin").toString().trim().split("\n")
const [_input_number_, ...input]: string[] = `3
21 Junkyu
21 Dohyun
20 Sunyoung`.toString().trim().split("\n")

const inputNumber:number = +_input_number_
const sortedArray:string[] = input.map(elem=>elem.split(" ")).sort( (a,b)=> +a[0] - +b[0]).map( (elem)=>elem.join(" ") )
console.log(sortedArray.join("\n"))