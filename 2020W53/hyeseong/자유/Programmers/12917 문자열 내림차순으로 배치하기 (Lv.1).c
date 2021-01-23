// https://programmers.co.kr/learn/courses/30/lessons/12917

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

char* solution(const char* s)
{
    char* answer = (char*)malloc(500);
    strcpy(answer, s);
    
    int i = 0;
    int j = 0;
    
    for (i = 0; i < strlen(answer); ++i)
    {
        for (j = 0; j < strlen(answer) - (i + 1); j++)
        {
            if (answer[j] < answer[j + 1])
                answer[j] ^= answer[j + 1] ^= answer[j] ^= answer[j + 1];
        }
    }
    
    return answer;
}