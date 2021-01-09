// https://programmers.co.kr/learn/courses/30/lessons/42860
// 풀긴 풀엇는데 혼자 똥꼬쇼하다가 헤성좌가 좌표로 보는 힌트 줘서 풀엇음. 혼자 힘으로 푼 건 아님...

let N = 6;

const factorial = (number) => {
    if(number === 0)return 0;
    return number + factorial(--number);
};
const arr = new Array(N).fill(null).map( elem => new Array());

let to = N;
let from = 0;
let usage = 0;
let y=-1, x=0;

for(let i=1; i<=factorial(N); i++){
    if(usage === 0){        //좌측 내려오는 대각선
        y++;
    }
    else if(usage === 1){   //바닥과 평행한 직선
        x++;
    }
    else if(usage === 2){   // 우측 올라가는 대각선
        x--;
        y--;
    }

    arr[y][x] = i;

    from++;
    if(from%to === 0){
        from=0, to--;
        usage = ++usage == 3 ? 0 : usage;
    }
}

// console.log(arr);

let rst = [];
for(let i=0; i<arr.length; i++){
    for(let j=0; j<arr[i].length; j++){
        rst.push(arr[i][j]);
    }
}
// console.log(rst);