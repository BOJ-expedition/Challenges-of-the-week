/*
    멀리 뛰기
    https://programmers.co.kr/learn/courses/30/lessons/12914
*/
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll c(size_t n,size_t r)
{
    static ll memo[2000][2000];
    ll& result = memo[n][r];
    
    if(n == r || r == 0)
        return 1;
    
    if(result)
        return result;
    
    return result = (c(n-1,r-1) + c(n-1,r)) % 1234567;
}

long long solution(int _n) {
    size_t n = _n;
    ll answer = 0;
    for(size_t i=0; i*2<=n; ++i){
        answer += c(n-i,i);
        answer %= 1234567;
    }
    return answer;
}