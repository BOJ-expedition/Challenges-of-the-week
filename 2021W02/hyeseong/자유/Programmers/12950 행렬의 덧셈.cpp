// https://programmers.co.kr/learn/courses/30/lessons/12950

#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2)
{
    vector<vector<int>> answer;
    
    for (int i = 0; i < (int)arr1.size(); ++i)
    {
        vector<int> temp;
        
        for (int j = 0; j < (int)arr1[0].size(); ++j)
            temp.emplace_back(0);    
        
        answer.emplace_back(temp);
    }
    
    for (int i = 0; i < (int)arr1.size(); ++i)
    {
        for (int j = 0; j < (int)arr1[0].size(); ++j)
            answer[i][j] = arr1[i][j] + arr2[i][j];
    }
    
    return answer;
}