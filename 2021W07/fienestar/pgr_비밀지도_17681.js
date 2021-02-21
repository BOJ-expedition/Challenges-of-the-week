/*
    [1차] 비밀지도
    https://programmers.co.kr/learn/courses/30/lessons/17681
*/

function solution(n, arr1, arr2) {
    return arr1.map((v,i)=>v|arr2[i]).map(v=>v.toString(2).replace(/1/g,'#').replace(/0/g,' ').padStart(n,' '))
}