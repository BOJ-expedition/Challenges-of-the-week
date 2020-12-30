// https://programmers.co.kr/learn/courses/30/lessons/12903

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

char* solution(const char* s)
{
    char* answer = (char*)malloc(3);
    
    if ((strlen(s) % 2) == 0)
    {
        answer[0] = s[(strlen(s) / 2) - 1];
        answer[1] = s[strlen(s) / 2];
        answer[2] = '\0';
    }
    
    else
    {
        answer[0] = s[strlen(s) / 2];
        answer[1] = '\0';  
    }
    
    return answer;
}