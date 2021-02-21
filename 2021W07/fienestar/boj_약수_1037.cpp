/*
    약수
    https://www.acmicpc.net/problem/1037
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    size_t dmin=-1,dmax=1;
    size_t N,T;

    cin >> N;
    while(N--){
        cin >> T;
        dmin = min({dmin,T});
        dmax = max({dmax,T});
    }
    cout << dmin * dmax;
}