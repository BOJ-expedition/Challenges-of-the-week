// https://www.acmicpc.net/problem/2839

// import fs = require("fs");
// const input:number = +fs.readFileSync("/dev/stdin").toString().trim();


const input:number = +"4".toString().trim();

/// 3x + 5y = from;
let from = input;
let x = 0;
let y = 0;

while(from>=0){
  if(from%5 === 0){
    y = from/5;
    break;
  }
  else{
    from -= 3;
    x++;
  }
}

if(from<0){
 console.log(-1)
}
else{
 console.log(x+y);
}