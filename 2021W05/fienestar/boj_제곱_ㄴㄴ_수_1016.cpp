/*
    제곱 ㄴㄴ 수
    https://www.acmicpc.net/problem/1016
*/

#include <bits/stdc++.h>

using namespace std;
using ull = unsigned long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ull m,M;
    cin >> m >> M;
    
    size_t count_is_not_squared_prime = 0;
    static bool is_not_prime[1000001];
    static bool is_not_squared_prime[1000001];
    for(ull i=2;i*i<=M;++i)
        if(not is_not_prime[i]){
            for(ull j=i;j*j<=M;j+=i)
                is_not_prime[j] = true;
            
            ull min_squared = i*i * ((m-1)/(i*i) + 1); // min_squared = min{i*i|x and x > m}
            for(ull j=min_squared;j<=M;j+=i*i){
                count_is_not_squared_prime += not is_not_squared_prime[j - m];
                is_not_squared_prime[j - m] = 1;
            }
        }
    cout << M - m + 1 - count_is_not_squared_prime;
}