let board = [[0,1,1,1],[1,1,1,1],[1,1,1,1],[0,0,1,0]]

let table = board.slice(0, board.length);
let answer = table[0].findIndex(elem=>elem===1) >= 0 ? 1 : 0;
//1행과 1열은 무슨 짓을 해봐야 최대 1의 정사각형밖에 못얻음. 체크만 하면 됨..인데 1행은 일단 체크하고 리턴할 수 잇게 해야함.

for(let y=1; y<table.length; y++){
    const prevY = y-1;

    for(let x=1; x<table[y].length; x++){
        if(table[y][x]){
            const prevX = x-1;

            const PyPxV = table[prevY][prevX] || 0;
            const PyCxV = table[prevY][x] || 0;
            const CyPxV = table[y][prevX] || 0;

            let min = Math.min(PyPxV, PyCxV, CyPxV)+1;

            table[y][x] = min;

            if(answer<min) answer = min;
        }

    }
}

console.log(table)
console.log(answer)

/*

이렇게 하면... 아래나 우측우로 갈수록 점검했던 요소를 다시 점검함
그래서 효율성이 안나오는듯
한번만 순회하고
그러면서 값을 얻어야함..

const getSQM = (fy, fx) => {
    let dis=0

    for(let i=0; i<board.length; i++){
        if(
            !board[fy][fx+dis]  ||
            !board[fy+dis]      ||
            !board[fy+dis][fx]  ||
            !board[fy+dis][fx+dis]
        ) break;

        dis++;
    }

    return dis;
}

let answer = 0;

for(let y=0; y<board.length; y++){
    let doBreak = false;

    for(let x=0; x<board[y].length; x++){
        if(board[y].findIndex(elem=>elem==1) < 0)break;
        if(board[y][x] === 0)continue;

        const thisSQM = getSQM(y, x);

        if(answer >= thisSQM)continue;

        answer = thisSQM;

        if(answer >= board.length-y || answer > board[y].length-x){ //더이상 볼것도 없을 경우
            doBreak=true;
            break;
        }
    }


    if(doBreak)break;
}

console.log(answer*answer)*/
