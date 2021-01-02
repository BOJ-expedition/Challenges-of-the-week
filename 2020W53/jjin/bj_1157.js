//https://www.acmicpc.net/problem/1157

const fs = require("fs");
const input = fs.readFileSync("/dev/stdin", "utf8").toString().trim();
const txt = input.toUpperCase().split("");
let result = [];
let map = {"?":0};
txt.forEach((elem, i, arr)=>{
    if(!map[elem]){
        map[elem] = 1;
    }
    else{
        map[elem]++;
    }
})
for(const key in map){
    result.push({char:key, cnt:map[key]});
}
result.sort((a,b)=>b.cnt-a.cnt);
console.log(result[0].cnt==result[1].cnt ? "?" : result[0].char);