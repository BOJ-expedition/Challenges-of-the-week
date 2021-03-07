/*
    콜라츠 추측
    https://programmers.co.kr/learn/courses/30/lessons/12943
*/
function solution(num) {
    let cnt = 0
    while(num != 1){
        if(cnt == 500)
            return -1
        
        if(num%2 == 0)
            num/=2
        else
            num+=num*2+1
        
        ++cnt
    }
    return cnt
}