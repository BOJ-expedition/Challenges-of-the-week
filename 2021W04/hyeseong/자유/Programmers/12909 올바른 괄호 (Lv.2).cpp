// https://programmers.co.kr/learn/courses/30/lessons/12909

#include <string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    if (((int)s.size() % 2) != 0)
        return false;
    
    int space = 0;
    
    for (int i = 0; i < (int)s.size(); ++i)
    {
        space = (s[i] == '(') ? space + 1 : space - 1;
        
        if (space < 0)
            return false;
    }
    
    if (space == 0)
        return true;
    
    else
        return false;
}