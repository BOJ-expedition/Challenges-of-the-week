/*
    타겟 넘버
    https://programmers.co.kr/learn/courses/30/lessons/43165
*/
function solution(numbers, target) {
    let cnt = 0
    function count_all(n)
    {
        if(n == numbers.length)
            return cnt += (numbers.reduce((a,b)=>a+b) == target)
        count_all(n+1)
        numbers[n] = -numbers[n]
        count_all(n+1)
        numbers[n] = -numbers[n]
    }
    count_all(0)
    return cnt;
}