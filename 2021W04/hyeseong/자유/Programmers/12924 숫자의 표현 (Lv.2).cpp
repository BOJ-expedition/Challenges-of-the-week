// https://programmers.co.kr/learn/courses/30/lessons/12924

#include <string>
#include <vector>

using namespace std;

int solution(int n)
{
    int answer = 0;
    
    for (int i = 1; i <= n; ++i)
    {
        int sum = 0;
        
        for (int j = i; j <= n; ++j)
        {
            sum += j;
            
            if (sum >= n)
            {
                answer = (sum == n) ? answer + 1 : answer;
                break;
            }
        }
    }
    
    return answer;
}