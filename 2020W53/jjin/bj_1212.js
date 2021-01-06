// https://www.acmicpc.net/submit/1212

let input = "314"
let arr = input.toString().trim().split("");
let toBitArr = (num) => {
    let number = num;
    let arr = new Array(3);
    for(let i=0; i<arr.length; i++){
        if(number == 0){
            arr[i] = 0
        }
        else{
            arr[i] = number%2
            number = Math.floor(number/2);
        }
    }
    return arr.reverse();
}
let number = "";
for(let i=0; i<arr.length; i++){
    let bit = toBitArr(arr[i]);
    if(i==0){
        if(bit[i]==0)bit.shift();
        if(bit[i]==0)bit.shift();
    }
    number += bit.join("");
}
console.log(number)

/*
timeout
const number = input.reverse().map((elem, i, arr) => arr[i] * Math.pow(8, i)).reduce((a,b)=>a+b);
//const i = fs.readFileSync("/dev/stdin").toString().split("");

const go = (n) => {
    let number = +n;
    let arr = [];
    while(number!=0){
        arr.unshift(number%2);
        number = Math.floor(number/2);
    }
    return arr.join("")
}

console.log(number);
console.log(go(number));
*/
