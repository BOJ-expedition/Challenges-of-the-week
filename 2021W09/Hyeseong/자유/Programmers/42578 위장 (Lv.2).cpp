// https://programmers.co.kr/learn/courses/30/lessons/42578
// (한 옷의 종류수 + 1(안입는경우의수))* (한 옷의 종류수 + 1(안입는경우의수)) -(아무것도 안 입는경우의수)

#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes)
{
    int answer = 1;
    unordered_map<string, int> umap;
    
    for (auto& i: clothes)
        umap[i[1]]++;
    
    for (auto it = umap.begin(); it != umap.end(); ++it)
        answer *= (it->second + 1);
    
    return answer - 1;
}