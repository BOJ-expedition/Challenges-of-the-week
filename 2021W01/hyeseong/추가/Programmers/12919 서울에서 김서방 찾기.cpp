// https://programmers.co.kr/learn/courses/30/lessons/12919

#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul)
{
    string answer = "";
    
    for (int i = 0; i < (int)seoul.size(); ++i)
    {
        if (seoul[i] == "Kim")
        {
            answer = "김서방은 " + to_string(i) + "에 있다";
            
            break;
        }
    }
    
    return answer;
}