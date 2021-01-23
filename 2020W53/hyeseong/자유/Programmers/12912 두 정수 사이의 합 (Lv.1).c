// https://programmers.co.kr/learn/courses/30/lessons/12912

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b)
{
    long long answer = 0;
    int i = 0;
    
    if (a >= b)
        a ^= b ^= a ^= b;
    
    for (i = a; i <= b; ++i)
        answer += i;
        
    return answer;
}