// https://www.acmicpc.net/problem/8958

// import fs = require("fs");
// const input = fs.readFileSync("/dev/stdin").toString();
const solution = (inputString:string) : void => {

    const input : string[] = inputString.trim().split("\n");

    input.shift();

    let str = "";

    let sigma = (number) =>{
        let n = 0;
        for(let i=1; i<number+1; i++){
            n+=i;
        }
        return n;
    }

    input.forEach(string=>{
        const arrayOfO = string.split("X");

        arrayOfO.forEach((elem, i, arr)=>{
            if(!elem)arr.splice(i,1)
        })

        str += arrayOfO.map(elem=>sigma(elem.length)).reduce((a,b)=>a+b) + "\n";
    });

    console.log(str.trim());
}

// solution(input)

solution(`5
OOXXOXXOOO
OOXXOOXXOO
OXOXOXOXOXOXOX
OOOOOOOOOO
OOOOXOOOOXOOOOX`)