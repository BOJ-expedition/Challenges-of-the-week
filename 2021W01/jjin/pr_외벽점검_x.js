// https://programmers.co.kr/learn/courses/30/lessons/60062

// const length = n;
// const weekArr = week;
// const distArr = dist.sort((a,b)=>b-a);

const length = 12;
const weekArr = [1,3,4,9,10];
const distArr = [3,5,7].sort((a,b)=>b-a);;


/*
*  할려고 했던 것
*  1) 원을 직선으로 보고 각 week에서 다른 week에 대한 dx를 구해서 2차원 배열에 집어넣음. 자기 자신에 대한 거리는 당연히 0
*  2) dist를 내림차순으로 정렬하여 각 가장 높은 dist부터 가장 많은 dx sum을 연속적으로 가질 수 있는 경우를 구함
*  3) 여기서부터 막혓는데 이걸 브레이크를 걸고 싶은데 무슨 조건에 끊어야할지 막막했음... 코드를 못쓰겠음
*  4) 안막는다 하더라도 어케 짱구를 굴려서 이걸 어떻게 해서 최솟값을 얻어내야하는데 이거도 막막햇음... 이것도 코드를 못쓰겠음
*
*  조이스틱 응용해보려고 햇는데 생각만 하다가 코드는 못쓴 거 같음.... 나한텐 많이 어려웠다.
*
* */

/*
let arr = new Array(weekArr.length).fill(null).map( (elem)=>new Array());

for(let i=0; i<weekArr.length; i++){
    const from = weekArr[i];
    for(let j=0; j<weekArr.length; j++){
        const to = weekArr[j];
        arr[i][j] = {
            str : to-from,
            rev : length-to+from
        };
    }
}
*/

/*
for(let i=distArr.length-1; i>=0; i--){

    const dist = distArr[i];
    let tmpSum = 0;
    let cnt = 0;

    let atOnce = false;

    for(let j=0; j<weekArr.length; j++){
        const from = weekArr[j];
        const toNext = weekArr[j+1] || weekArr[0];
        const toPrev = weekArr[j-1] || weekArr[weekArr.length-1];


        const dx = from - toPrev < 0 ? Math.abs(length - toPrev + from +1) : Math.abs(toNext-from);
        if(tmpSum+dx<=dist) {
            tmpSum+=dx;
            cnt++;
        }
    }
    // console.log(dist, cnt, tmpSum)
    arr.push({length:tmpSum, cnt:cnt});
}
console.log(arr)
let rst = [];
for(let i=0; i<arr.length; i++){
    const obj = arr[i];
    const idx = rst.findIndex( elem => elem.length === obj.length && elem.cnt === obj.cnt);
    if(idx<0)rst.push(obj);
}
console.log(rst.length)
*/
