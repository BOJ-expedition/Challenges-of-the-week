// https://programmers.co.kr/learn/courses/30/lessons/17682

#include <string>
#include <cmath>
#include <vector>

using namespace std;

int solution(string dartResult)
{
    int answer = 0;
    int index = 0;
    
    vector<int> score = {0, 0, 0};
    vector<char> mul = {'S', 'D', 'T'};
    
    for (int i = 0; i < 3; ++i)
    {
        string s = "";
        
        while ('0' <= dartResult[index] && dartResult[index] <= '9')
        {
            s.push_back(dartResult[index]);
            index++;
        }
        
        score[i] = stoi(s);
        
        for (int j = 0; j < 3; ++j)
        {
            if (dartResult[index] == mul[j])
            {
                score[i] = pow(score[i], j + 1);
                index++;
            }
        }
        
        while ((dartResult[index] == '*') || (dartResult[index] == '#'))
        {
            if (dartResult[index] == '*')
            {
                for (int j = i; j >= i - 1; --j)
                {
                    if (j < 0)
                        break;
                    
                    score[j] *= 2;
                }
                
                index++;
            }
            
            else if (dartResult[index] == '#')
            {
                score[i] *= -1;
                
                index++;
            }
        }
    }
    
    for (auto& i : score)
        answer += i;

    return answer;
}