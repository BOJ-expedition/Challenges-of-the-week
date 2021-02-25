/*
    이상한 문자 만들기
    https://programmers.co.kr/learn/courses/30/lessons/12930
*/
function solution(s) {
    return s.split(' ').map(e=>e.split('').map((v,i)=>(i&1)?v.toLowerCase():v.toUpperCase()).join('')).join(' ')
}