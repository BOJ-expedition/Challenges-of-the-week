// https://programmers.co.kr/learn/courses/30/lessons/12921

#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<bool> v(n+1, true);
    
    for (int i = 2; i <= n; ++i)
    {
        if (v[i] == false)
            continue;
        
        for (int j = 2; j*i <= n; ++j)
        {
            v[i * j] = false;    
        }
    }
    
    for (int i = 2; i <= n; ++i)
    {
        if (v[i] == true)
            answer++;
    }
    
    return answer;
}