// https://programmers.co.kr/learn/courses/30/lessons/12934

#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n)
{
    long long answer = 0;
    long long x = static_cast<long long>(sqrt(n));
    
    if (n == x * x)
        answer = (x+1) * (x+1);
    
    else
        answer = -1;
    
    return answer;
}