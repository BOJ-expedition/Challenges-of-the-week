// https://programmers.co.kr/learn/courses/30/lessons/12918

#include <string>
#include <vector>

using namespace std;

bool solution(string s)
{
    if (!((int)s.size() == 4) || ((int)s.size() == 6))
        return false;
    
    for (int i = 0; i < (int)s.size(); ++i)
    {
        if ( !((s[i] >= '0') && (s[i] <= '9')) )
            return false;
    }
    
    return true;
}