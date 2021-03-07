/*
    검증수
    https://www.acmicpc.net/problem/2475
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    size_t sum = 0;
    size_t v;
    size_t n = 5;
    while(n--){
        cin >> v;
        sum += v*v;
    }
    cout << sum%10;
}