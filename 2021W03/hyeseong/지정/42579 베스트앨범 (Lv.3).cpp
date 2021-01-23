// https://programmers.co.kr/learn/courses/30/lessons/42579

#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <iostream>

using namespace std;

vector<int> PLAY;

bool compare_for_total(pair<string, int> a, pair<string, int> b)
{
    return a.second > b.second;
}

bool compare_for_index(int a, int b)
{
	if (PLAY[a] != PLAY[b])
		return PLAY[a] > PLAY[b];
		
	else
	    return a < b;
}

vector<int> solution(vector<string> genres, vector<int> plays)
{
    vector<int> answer;
    PLAY.assign(plays.begin(), plays.end());
    
    unordered_map<string, int> umap_total; // { "classic": 1450, "pop": 3100 }
    unordered_map<string, vector<int>> umap_index; // { "classic": {0, 2, 3}, "pop": {1, 4} }
    
    int SIZE = (int)genres.size();
    
    for (int i = 0; i < SIZE; ++i)
    {
        if (umap_total.find(genres[i]) == umap_total.end())
            umap_total[genres[i]] = 0;
        
        umap_total[genres[i]] += plays[i];
        
        if (umap_index.find(genres[i]) == umap_index.end())
            umap_index[genres[i]] = vector<int>();
        
        umap_index[genres[i]].emplace_back(i);
    }
    
    vector<pair<string, int>> elems(umap_total.begin(), umap_total.end());
    sort(elems.begin(), elems.end(), compare_for_total);
    
    for (auto it = umap_index.begin(); it != umap_index.end(); ++it)
        sort(it->second.begin(), it->second.end(), compare_for_index);
        
    for (int i = 0; i < (int)elems.size(); ++i)
    {
        for (int j = 0; j < (int)umap_index[elems[i].first].size(); ++j)
        {
        	if (j < 2)
        		answer.emplace_back(umap_index[elems[i].first][j]);
        }
    }
    
    return answer;
}