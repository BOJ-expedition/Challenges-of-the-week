/*
    메뉴 리뉴얼
    https://programmers.co.kr/learn/courses/30/lessons/72411
*/

#include <bits/stdc++.h>

using namespace std;

static string order;
static list<char> suborder;
static map<string, size_t> suborder_frequency;
static size_t max_suborder_frequency;
static list<string> suborder_maxs;

void count_suborder(size_t n, size_t begin)
{
    if(!n){
        string idx(suborder.begin(),suborder.end());

        size_t frequency = ++suborder_frequency[idx];
        if(frequency > max_suborder_frequency){
            max_suborder_frequency = frequency;
            suborder_maxs = {idx};
        }
        else if(frequency == max_suborder_frequency)
            suborder_maxs.push_back(idx);
        return;
    }
    
    for(size_t i=begin; i != order.size(); ++i){
        suborder.push_back(order[i]);
        count_suborder(n-1,i+1);
        suborder.pop_back();
    }
}

vector<string> solution(vector<string> orders, vector<int> course) {
    vector<string> answer;
    
    for(string& order:orders)
        sort(order.begin(),order.end());
    
    for(int len:course){
        ::suborder_maxs = {};
        ::max_suborder_frequency = 0;

        for(string& order:orders){
            ::order = order;
            count_suborder(len, 0);
        }

        if(max_suborder_frequency >= 2)
            for(auto& s:suborder_maxs)
                answer.push_back(s);
    }
    sort(answer.begin(),answer.end());
    return answer;
}
