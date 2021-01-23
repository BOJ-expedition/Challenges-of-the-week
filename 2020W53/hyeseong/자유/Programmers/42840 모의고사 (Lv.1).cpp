// https://programmers.co.kr/learn/courses/30/lessons/42840

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    
    vector<vector<int>> arr = {{1, 2, 3, 4, 5}, {2, 1, 2, 3, 2, 4, 2, 5}, {3, 3, 1, 1, 2, 2, 4, 4, 5, 5}};
    vector<int> score = {0, 0, 0};
    
    for (int i = 0; i < (int)answers.size(); ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (arr[j][i % (int)arr[j].size()] == answers[i])
                score[j]++;
        }
    }
    
    for (int i = 0; i < 3; ++i)
    {
        if ((score[i] >= score[(i + 1) % 3]) && (score[i] >= score[(i + 2) % 3]))
            answer.emplace_back(i + 1);
    }
    
    return answer;
}