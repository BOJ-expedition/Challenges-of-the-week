// https://programmers.co.kr/learn/courses/30/lessons/12940

#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m)
{
    vector<int> answer;
    
    int x = n < m ? n : m;
    int y = n < m ? m : n;
    
    for (int i = x; i >= 1; --i)
    {
        if ((x % i == 0) && (y % i == 0))
        {
            answer.emplace_back(i);
            break;
        }
    }
    
    for (int i = y; i <= x*y; ++i)
    {
        if ((i % x == 0) && (i % y == 0))
        {
            answer.emplace_back(i);
            break;
        }   
    }
    
    return answer;
}