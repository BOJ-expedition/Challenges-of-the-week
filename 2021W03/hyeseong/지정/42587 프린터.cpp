// https://programmers.co.kr/learn/courses/30/lessons/42587

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> priorities, int location)
{
    int answer = 0;
    int max = 0;
    
    while (true)
    {
        max = *max_element(priorities.begin(), priorities.end());
            
        if (max == *(priorities.begin()))
        {
            priorities.erase(priorities.begin());
                    
            answer++;
            location--;
                    
            if (location == -1)
                break;
        }
            
        else
        {
            priorities.emplace_back(*priorities.begin());
            priorities.erase(priorities.begin());
                    
            location--;
                    
            if (location == -1)
                location = (int)priorities.size() - 1;
        }
    }
    return answer;
}