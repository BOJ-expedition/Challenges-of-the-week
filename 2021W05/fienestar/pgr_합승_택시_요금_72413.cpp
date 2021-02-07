/*
    합승 택시 요금
    https://programmers.co.kr/learn/courses/30/lessons/72413
*/

#include <bits/stdc++.h>

#define update(a,b,f) do{if(a != -1)a = f(a,b); else a = b;}while(0)

using namespace std;

int solution(int n, int s, int a, int b, vector<vector<int>> fares) {
    vector<vector<int>> optimized_fares(n, vector<int>(n,-1));
    
    for(size_t i=0; i!=n; ++i)
        optimized_fares[i][i] = 0;
    
    for(auto& fare_data:fares){
        auto start = fare_data[0]-1;
        auto end = fare_data[1]-1;
        auto fare = fare_data[2];
        update(optimized_fares[start][end],fare,min);
        update(optimized_fares[end][start],fare,min);
    }
    
    for(size_t k=0; k!=n; ++k)
        for(size_t a=0; a!=n; ++a)
            if(optimized_fares[a][k] != -1)
                for(size_t b=0; b!=n; ++b)
                    if(optimized_fares[k][b] != -1)
                        update(optimized_fares[a][b],optimized_fares[a][k]+optimized_fares[k][b],min);
    
    int answer = -1;
    --a; --b; --s;
    for(size_t k=0; k!=n; ++k)
        if(optimized_fares[s][k] != -1 && optimized_fares[k][a] != -1 && optimized_fares[k][b] != -1)update(answer, optimized_fares[s][k] + optimized_fares[k][a] + optimized_fares[k][b],min);
    return answer;
}