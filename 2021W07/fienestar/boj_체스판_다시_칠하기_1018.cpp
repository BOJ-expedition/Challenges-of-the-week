/*
    체스판 다시 칠하기
    https://www.acmicpc.net/problem/1018
*/

#include <bits/stdc++.h>

using namespace std;

size_t count(vector<vector<char>>& v,size_t N,size_t M)
{
    char b[] = {'W','B'};
    size_t p;
    size_t min_cnt = -1;

    for(size_t k=0;k!=2;++k){
        swap(b[k],b[0]);
        p=0;

        size_t cnt = 0;

        for(size_t i=N-8; i!=N; ++i){
            for(size_t j=M-8; j!=M; ++j){
                cnt += b[p] != v[i][j];
                p = !p;
            }
            p = !p;
        }

        min_cnt = min({min_cnt,cnt});
    }

    return min_cnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    size_t N,M;
    cin >> N >> M;
    
    vector<vector<char>> v(N,vector<char>(M));

    for(auto& c:v)
        for(auto& t:c)
            cin >> t;

    size_t ans = -1;
    
    for(size_t i=8; i<=N; ++i)
        for(size_t j=8; j<=M; ++j)
            ans = min({ans,count(v,i,j)});

    cout << ans;
}