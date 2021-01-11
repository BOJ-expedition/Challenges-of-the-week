// https://programmers.co.kr/learn/courses/30/lessons/42889

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<double, int> prev, pair<double, int> curr)
{
	if (prev.first == curr.first)
		return prev.second < curr.second;
	
	else
		return prev.first > curr.first;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    
    vector<pair<double, int>> v;
    
    vector<int> numerator(N, 0);
    vector<int> denominator(N, 0);
    
    for (int i = 0; i < (int)stages.size(); ++i)
    {
        for (int j = stages[i] - 1; j < stages[i]; ++j)
        {
            if (j == N)
				continue;
            
            numerator[j]++;
        }
            
        
        for (int j = 0; j < stages[i]; ++j)
        {
            if (j == N)
				continue;
            
            denominator[j]++;
        }
            
    }
    
    for (int i = 0; i < N; ++i)
    {
        if (denominator[i] == 0)
            v.emplace_back(pair<double, int>(0.0f, i + 1)); 
        
        else
            v.emplace_back(pair<double, int>(((double)numerator[i] / (double)denominator[i]), i + 1));    
    }
    	
    
    sort(v.begin(), v.end(), compare);
    
    for (auto i : v)
    	answer.emplace_back(i.second);
    
    return answer;
}