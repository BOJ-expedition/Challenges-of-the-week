/*
    RGB 거리
    https://www.acmicpc.net/problem/1149

    DP[i][color] = i번째 집을 color로 칠하는 비용의 최솟값
        = min(DP[i-1][other color], DP[i-1][other color]) + cost[i][color] (i>=1)
        = cost[i][color] (i==0)
*/

#include <bits/stdc++.h>

#define all(c) begin(c),end(c)

using namespace std;

int main()
{
    size_t cost[2][3]={};
    size_t N;
    cin >> N;
    for(size_t i=0;i!=N;++i)
        for(size_t j=0;j!=3;++j){
            cin >> cost[~i&1][j];
            cost[~i&1][j] += min(cost[i&1][(j+1)%3],cost[i&1][(j+2)%3]);
        }
    cout << min(min(cost[N&1][0],cost[N&1][1]),cost[N&1][2]);
}
