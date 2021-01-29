/*
    발전소
    https://www.acmicpc.net/problem/1102
*/

#include <bits/stdc++.h>

using namespace std;

#define enable(flag, bit) (flag | (1 << bit))
#define is_enabled(flag, bit) bool(flag & (1 << bit))
#define loop(i, N) for(size_t i=0; i != N; ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    static size_t N; // 1 <= N <= 16
    cin >> N;
    
    static size_t cost[16][16];
    loop(i,N)
        loop(j,N)
            cin >> cost[i][j];

    size_t status = 0;
    size_t enabled = 0;

    loop(i,N){
        char c;
        cin >> c;
        if(c == 'Y'){
            status = enable(status, i);
            ++enabled;
        }
    }

    size_t p;
    cin >> p;

    if(p <= enabled)
        cout << 0;
    
    else if(!enabled)
        cout << -1;

    else{
        static function<size_t(size_t,size_t)> get_min_cost = [](size_t need_to_enable, size_t status){
            static size_t memory[1 << 16];
            size_t& min_cost = memory[status];
            
            if(!need_to_enable--)
                return static_cast<size_t>(0);
            
            if(min_cost)
                return min_cost;

            min_cost = 1e9;

            loop(i, N)
                if(is_enabled(status, i))
                    loop(j, N)
                        if(!is_enabled(status, j))
                            min_cost = min({
                                min_cost,
                                get_min_cost(need_to_enable, enable(status, j)) + cost[i][j]
                            });
            return min_cost;
        };
        cout << get_min_cost(p - enabled, status);
    }
}