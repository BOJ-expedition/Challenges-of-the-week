/*
    1
    https://www.acmicpc.net/problem/4375
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    size_t N;
    while(cin >> N){
        unsigned long long v = 1;
        size_t c = 1;
        while((v%=N) != 0){
            v = v * 10 + 1;
            ++c;
        }
        cout << c << "\n";
    }
}