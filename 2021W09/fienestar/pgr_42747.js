/*
    H-Index
    https://programmers.co.kr/learn/courses/30/lessons/42747
*/
function solution(citations) {
    let map = {}
    let max = 0
    
    citations.forEach(v=>map[v] = 0)
    citations.forEach(v=>{
        ++map[v]
        max = Math.max(max,v)
    })
    
    let sum = 0
    for(let i=max;i>=0;--i){
        if(map[i])sum += map[i]
        if(sum >= i)
            return i
    }
    
    return 0
}