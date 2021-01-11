// https://programmers.co.kr/learn/courses/30/lessons/12947

#include <string>
#include <vector>

using namespace std;

bool solution(int x)
{
    int t = x;
    int e = 1;
    int f = 0;
    
    while (t > 0)
    {
        f += (t % 10);
        t /= 10;
    }
    
    return (x % f) == 0 ? true : false;
}