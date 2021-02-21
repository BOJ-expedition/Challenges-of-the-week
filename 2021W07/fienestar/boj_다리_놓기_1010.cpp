/*
    다리 놓기
    https://www.acmicpc.net/problem/1010
*/

#include <bits/stdc++.h>

using namespace std;
using ull = unsigned long long;

ull C(size_t n,size_t r)
{
    if(n==r || r==0)
        return 1;

    static ull memo[30][30];
    ull& result = memo[n][r];

    if(result)return result;

    return result = C(n-1,r-1)+C(n-1,r)
}

ull H(size_t n,size_t r)
{
    return C(n+r-1,r);
}

void solve()
{
    size_t N,M;
    cin >> N >> M;
    cout << C(M,N) << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    size_t T;
    cin >> T;
    while(T--)solve();
}