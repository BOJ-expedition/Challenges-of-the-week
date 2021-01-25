// https://programmers.co.kr/learn/courses/30/lessons/42889

// 이미 이전에 자유 문제로 해결한적이 있어서
// 다시 한번 풀어서 제출합니다...

#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

bool compare(pair<double, int> a, pair<double, int> b)
{
    if (a.first != b.first)
        return a.first > b.first;
    
    else
        return a.second < b.second;
}

vector<int> solution(int N, vector<int> stages)
{
    int clear[502] = { 0, };
    int challenge[502] = { 0, };
    
    for (auto& i : stages)
    {
        for (int j = 1; j <= i; ++j)
        {
            if (j <= i)
                ++clear[j];
            
            if (j == i)
                ++challenge[j];
        }
    }
    
    vector<pair<double, int>> v;
    
    for (int i = 1; i <= N; ++i)
    {
        if (challenge[i] != 0)
            v.emplace_back(pair<double, int>((double)challenge[i] / (double)clear[i], i));
        
        else
            v.emplace_back(pair<double, int>(0, i));
    }
    
    sort(v.begin(), v.end(), compare);
    
    vector<int> answer;
    
    for (auto& i: v)
        answer.emplace_back(i.second);
    
    return answer;
}