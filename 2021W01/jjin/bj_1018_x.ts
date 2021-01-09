//import fs = require("fs");
//const input = fs.readFileSync("/dev/stdin").toString().trim();
// 체스 아직 못품
const input = `8 8
WBWBWBWB
BWBWBWBW
WBWBWBWB
BWBBBWBW
WBWBWBWB
BWBWBWBW
BWBWBWBW
BWBWBWBW
BWBWBWBW
BWBWBWBW
WBWBWBWB
BWBWBWBW`

let data = {
    inputArr : input.split("\n"),
    flags : []
}

const [x, y] : number[] = data.inputArr.shift().split(" ").map(elem=>+elem);

for(let i=0; i<data.inputArr.length; i++){
    let str : any = data.inputArr[i];
    // console.log(str)
    str = str.split("W");
    // console.log(str)
    const wCounting = str.reduce( (rst, next, idx, org)=>{
        if(rst === "") rst = 0;
        else if(typeof rst === "string") rst = 1;

        if(next.length >= 1)rst += 1
        return rst;
    })

    data.flags[i] = wCounting;
}

if(data.flags.length > 8){
    const obj = data.flags.reduce( (result, next, idx, arr)=>{
        const tempArr = arr.slice(idx, idx+8);
        if(tempArr.length === 8){
            const t = tempArr.reduce( (a,b)=>a+b);
            console.log(t)
            return Math.max(result.cnt, t) === result.cnt ? result : {cnt:t, idx : idx}
        }
        else{
            return result
        }
    })

    data.inputArr = data.inputArr.slice(obj.idx, obj.idx+8);
    data.flags = data.flags.slice(obj.idx, obj.idx+8);
    console.log(data.inputArr)
    console.log(data.flags)
}