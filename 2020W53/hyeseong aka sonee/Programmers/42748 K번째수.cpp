// https://programmers.co.kr/learn/courses/30/lessons/42748

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for (int i = 0; i < (int)commands.size(); ++i)
    {
        vector<int>::const_iterator first = array.begin() + commands[i][0] - 1;
        vector<int>::const_iterator last = array.begin() + commands[i][1];
        vector<int> newVec(first, last);
        
        sort(newVec.begin(), newVec.end());
        
        answer.emplace_back(newVec[commands[i][2] - 1]);
    }
    
    return answer;
}