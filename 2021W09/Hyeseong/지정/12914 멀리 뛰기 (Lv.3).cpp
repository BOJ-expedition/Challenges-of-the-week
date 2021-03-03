// https://programmers.co.kr/learn/courses/30/lessons/12914

#include <string>
#include <vector>

using namespace std;

long long solution(int n)
{   
    const long long MOD = 1234567;
    long long arr[2002] = {1, 1, 2, 0};
    
    if (n == 1)
        return arr[1];
    
    else if (n == 2)
        return arr[2];
    
    else
    {
        for (int i = 3; i <= n; ++i)
            arr[i] = (arr[i - 1] + arr[i - 2]) % MOD;
        
        return arr[n];
    }
}