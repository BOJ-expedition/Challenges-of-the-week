// https://www.acmicpc.net/problem/1259

// import fs = require("fs");
// const input:string[] = fs.readFileSync("/dev/stdin").toString().trim().split("\n").map( (elem)=>elem.trim() );;

const input:string[] =`121
1231
12421
0`.toString().trim().split("\n").map( (elem)=>elem.trim() );

const isPalindrome = (string:string):boolean => {
    const org : string = string;
    const rev : string = org.split("").reverse().join("")
    return org===rev;
}

input.pop();

let str = "";
for(let i=0; i<input.length; i++){
    if(isPalindrome(input[i]))
        str += "yes";
    else
        str += "no";

    str+= "\n";
}

console.log(str.trim())
