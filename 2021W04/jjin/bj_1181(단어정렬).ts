(()=>{

// import fs = require("fs");
// const input:string[] =  fs.readFileSync("/dev/stdin").toString().trim().split("\n").slice(1);

const input: string[] = `13
but
i
wont
hesitate
no
more
no
more
it
cannot
wait
im
yours`.toString().trim().split("\n").slice(1);

/*
타겟을 좀 빠르고 간단하게 만들어야할텐데 스트릭트하게 할라니까 은근 까다로움
쩝
*/

const target: string[] = [input[0]];
input.forEach(elem => {
    const idx = target.indexOf(elem);

    if (idx < 0) target.push(elem);
});

const stringCompare = (a: string, b: string): number => {
    for (let i = 0; i < a.length; i++) {
        if (a[i] !== b[i]) {
            return a[i] > b[i] ? 1 : -1;
        }
    }
}

target.sort((a, b) => {
    if (a.length === b.length)
        return stringCompare(a, b);
    else
        return (a.length > b.length ? 1 : -1);
});

let str = "";

target.forEach(elem => {
    str += elem + "\n"
});

console.log(str.trim());

})();