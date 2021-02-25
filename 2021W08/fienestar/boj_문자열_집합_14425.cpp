/*
    문자열 집합
    https://www.acmicpc.net/problem/14425
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    size_t N,M;
    string S;
    set<string> s;
    cin >> N >> M;
    while(N--){
        cin >> S;
        s.insert(S);
    }

    size_t cnt = 0;
    while(M--){
        cin >> S;
        cnt += s.find(S) != s.end();
    }

    cout << cnt;
}