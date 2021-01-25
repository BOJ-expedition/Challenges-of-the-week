// https://programmers.co.kr/learn/courses/30/lessons/42842

#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(int brown, int yellow)
{
    vector<int> answer;
    
    for (int i = 1; i <= (int)(sqrt((double)(yellow))); i++)
    {
        if ((yellow % i) == 0)
        {
            if ( ((yellow / i) + 2) * (i + 2) - yellow == brown )
            {
                answer.emplace_back((yellow / i) + 2 >= (i + 2) ? (yellow / i) + 2 : i + 2);
                answer.emplace_back((yellow / i) + 2 >= (i + 2) ? i + 2 : (yellow / i) + 2);
            }
        }
    }
    
    return answer;
}