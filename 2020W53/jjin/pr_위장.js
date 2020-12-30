// https://programmers.co.kr/learn/courses/30/lessons/42578

function solution(clothes) {
    const species = [];
    const items = [];
    for(let i=0; i<clothes.length; i++){
        const idx = species.indexOf(clothes[i][1]);
        if(idx<0){
            species.push(clothes[i][1]);
            items[species.length-1] = [clothes[i][0]];
        }
        else{
            items[idx].push(clothes[i][0]);
        }
    }
    let number = 1;
    for(let i=0; i<species.length; i++){
        number *= items[i].length+1;
    }
    number -= 1;
    return number;
};