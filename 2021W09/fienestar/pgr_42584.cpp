/*
    주식가격
    https://programmers.co.kr/learn/courses/30/lessons/42584
*/
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> prices) {
    stack<size_t> s;
    vector<int> answer(prices.size());
    size_t time = 0;
    
    for(auto& v:prices){
        while(s.size() && prices[s.top()] > v){
            answer[s.top()] = time - s.top();
            s.pop();
        }
        s.emplace(time);
        ++time;
    }
    
    --time;
    
    while(s.size()){
        answer[s.top()] = time - s.top();
        s.pop();
    }
    
    return answer;
}