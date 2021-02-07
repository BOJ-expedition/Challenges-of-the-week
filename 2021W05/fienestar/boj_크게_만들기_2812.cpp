/*
    크게 만들기
    https://www.acmicpc.net/problem/2812
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,K;
    string l;
    char c;
    cin >> N >> K;
    cin >> c;
    l.push_back(c);
    while(cin >> c){
        while(K && l.size() && c > l.back()){
            l.pop_back();
            --K;
        }
        l.push_back(c);
    }
    l.resize(l.size()-K);
    cout << l;
}