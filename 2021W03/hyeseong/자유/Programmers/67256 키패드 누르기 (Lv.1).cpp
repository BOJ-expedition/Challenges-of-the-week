// https://programmers.co.kr/learn/courses/30/lessons/67256

#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

string solution(vector<int> numbers, string hand)
{
    string answer = "";
    
    vector<pair<int, int>> coord =
    {
        {1, 3}, // 0
        {0, 0}, // 1
        {1, 0}, // 2
        {2, 0}, // 3
        {0, 1}, // 4
        {1, 1}, // 5
        {2, 1}, // 6
        {0, 2}, // 7
        {1, 2}, // 8
        {2, 2}, // 9
        {0, 3}, // *
        {2, 3}  // #
    };
    
    pair<int, int> curL = coord[10];
    pair<int, int> curR = coord[11];
    
    for (auto& n : numbers)
    {
        if (n == 1 || n == 4 || n == 7)
        {
            answer += "L";
            curL = coord[n];
        }
        
        else if (n == 3 || n == 6 || n == 9)
        {
            answer += "R";
            curR = coord[n];
        }
        
        else
        {
            int distL = abs(curL.first - coord[n].first) + abs(curL.second - coord[n].second);
            int distR = abs(curR.first - coord[n].first) + abs(curR.second - coord[n].second);
            
            if (distL < distR)
            {
                answer += "L";
                curL = coord[n];
            }
            
            else if (distL > distR)
            {
                answer += "R";
                curR = coord[n];
            }
            
            else
            {
                if (hand == "left")
                {
                    answer += "L";
                    curL = coord[n];
                }
                
                else if (hand == "right")
                {
                    answer += "R";
                    curR = coord[n];
                }
            }
            
        }
    }
    
    return answer;
}