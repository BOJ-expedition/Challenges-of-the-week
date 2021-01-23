// https://programmers.co.kr/learn/courses/30/lessons/42576

#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion)
{
    unordered_map<string, int> umap;
    string answer = "";
    
    for (auto& i: participant)
        umap[i]++;
    
    for (auto& i: completion)
        umap[i]--;
    
    for (auto it = umap.begin(); it != umap.end(); ++it)
    {
        if (it->second != 0)
        {
            answer = it->first;
            break;
        }
    }
    
    return answer;
}