// https://www.acmicpc.net/submit/1212

//아직 못품
const input  = [3,1,4];

let arr = [];
for(let i=0; i<input.length; i++){
    const v = +input[i];
    switch(v){
        case 0 : arr.push("000"); break;
        case 1 : arr.push("001"); break;
        case 2 : arr.push("010"); break;
        case 3 : arr.push("011"); break;
        case 4 : arr.push("100"); break;
        case 5 : arr.push("101"); break;
        case 6 : arr.push("110"); break;
        case 7 : arr.push("111"); break;
    }
}

let last = arr[arr.length-1];

if(arr[0][0] == "0") arr[0] = arr[0].substring(1);
if(arr[0][0] == "0") arr[0] = arr[0].substring(1);
if(last[last.length-1] == "0") last = last.substring(0,last.length-1);
if(last[last.length-1] == "0") last = last.substring(0,last.length-1);
arr[arr.length-1] = last;
console.log( arr.join("") )

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
