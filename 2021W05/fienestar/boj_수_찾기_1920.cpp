/*
    수 찾기
    https://www.acmicpc.net/problem/1920
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> A;
    size_t N,M;
    int t;
    cin >> N;
    A.resize(N);
    for(int& a:A)
        cin >> a;

    sort(A.begin(),A.end());
    cin >> M;
    while(M--){
        cin >> t;
        auto it = lower_bound(A.begin(),A.end(),t);
        cout << (it != A.end() && *it == t) << "\n";
    }
}