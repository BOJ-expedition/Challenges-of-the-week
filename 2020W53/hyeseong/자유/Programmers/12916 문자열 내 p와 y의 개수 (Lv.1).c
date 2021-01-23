// https://programmers.co.kr/learn/courses/30/lessons/12916

#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    
    int pCount = 0;
    int yCount = 0;

    for (int i = 0; i < (int)s.size(); ++i)
    {
        switch(s[i])
        {
            case 'p':
            case 'P':
                pCount++;
                break;
                
            case 'y':
            case 'Y':
                yCount++;
                break;
        }
    }
    
    answer = (pCount == yCount) ? true : false;

    return answer;
}