// https://programmers.co.kr/learn/courses/30/lessons/12982

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    int sum = 0;
    
    sort(d.begin(), d.end());
    
    for (int i = 0; i < (int)d.size(); ++i)
    {
        sum += d[i];
        
        if (sum > budget)
        {
            answer = i;
            break;
        }
    }
    
    if (sum <= budget)
        return (int)d.size();
    
    else
        return answer;
}