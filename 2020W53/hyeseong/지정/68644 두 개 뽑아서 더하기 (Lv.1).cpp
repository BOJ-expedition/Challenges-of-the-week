// https://programmers.co.kr/learn/courses/30/lessons/68644

#include <string>
#include <vector>
#include <set>

using namespace std;

vector<int> solution(vector<int> numbers)
{
    vector<int> answer;
    set<int> s;
    
    for (int i = 0; i < (int)numbers.size(); ++i)
    {
        for (int j = 0; j < (int)numbers.size(); ++j)
        {
            if (i == j)
                continue;
            
            else
                s.insert(numbers[i] + numbers[j]);
        }
    }
    
    answer.assign(s.begin(), s.end());
    
    return answer;
}