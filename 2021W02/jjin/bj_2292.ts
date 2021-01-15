// https://www.acmicpc.net/problem/2292

// import fs = require("fs");
// const input :number = +fs.readFileSync("/dev/stdin").toString().trim();

const input : number = +"66".toString().trim();

const getDistFromCenterInHive = (x : number) => {
    if(x<=0)return 0;

    let n = 1;
    for(let i=0; true; i++){
        n = (i*6) + n;

        if(x <= n) return i+1;
    }
}

console.log(getDistFromCenterInHive(input));