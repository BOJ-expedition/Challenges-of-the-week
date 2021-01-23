// https://programmers.co.kr/learn/courses/30/lessons/12930

#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string s) {
    string answer = "";
    bool flag = true;
    
    for (int i = 0; i < (int)s.size(); ++i)
    {
        if (s[i] == ' ')
        {
            flag = false;
            answer += s[i];
        }
        
        else
            answer += (flag) ? toupper(s[i]) : tolower(s[i]);    
            
        flag = !flag;
    }
    
    return answer;
}