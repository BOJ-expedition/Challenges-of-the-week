/*
    체육복
    https://programmers.co.kr/learn/courses/30/lessons/42862
*/

function solution(n, lost, reserve) {
    let reserve_map = {}
    let lost_map = {}
    let can = n - lost.length
    
    lost.forEach(v=>lost_map[v] = true)
    reserve.forEach(v=>{
        if(lost_map[v]){
            delete lost_map[v]
            ++can
        }else{
            reserve_map[v] = true
        }
    })
    
    for(let v in lost_map)
        can+=[-1,0,1].some(m=>{
            if(!reserve_map[+v+m])
                return false
            
            delete reserve_map[+v+m]
            return true
        })
    return can;
}