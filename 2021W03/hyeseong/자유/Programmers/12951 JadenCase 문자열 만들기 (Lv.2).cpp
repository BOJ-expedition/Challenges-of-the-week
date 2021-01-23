// https://programmers.co.kr/learn/courses/30/lessons/12951

#include <string>
#include <vector>

using namespace std;

string solution(string s)
{
    string answer = s;
    bool upper_flag = true;

    for (int i = 0; i < (int)s.size(); ++i)
    {
        if (upper_flag == true)
        {
            if ('a' <= s[i] && s[i] <= 'z')
                answer[i] = answer[i] - 'a' + 'A';
            
            upper_flag = false;
        }

        else
        {
            if ('A' <= s[i] && s[i] <= 'Z')
                answer[i] = answer[i] - 'A' + 'a';
        }

        if (s[i] == ' ')
            upper_flag = true;
    }

    return answer;
}