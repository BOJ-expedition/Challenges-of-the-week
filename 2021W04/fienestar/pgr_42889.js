/*
    실패율
    https://programmers.co.kr/learn/courses/30/lessons/42889
*/

function solution(N, stages) {
    let answer = [];
    for(let i = 1; i <= N; ++i){
        let cleared = stages.filter(v=>v>i).length
        let reached = stages.filter(v=>v>=i).length
        answer.push({value: cleared/reached, index: i})
    }
    
    return answer.sort((a,b)=>a.value-b.value).map(v=>v.index)
}