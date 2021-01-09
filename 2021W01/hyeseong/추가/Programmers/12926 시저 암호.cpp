// https://programmers.co.kr/learn/courses/30/lessons/12926

#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    int temp = 1;
    
    for (int i = (int)s.size() - 1; i >= 0; --i)
    {
        if (!((s[i] == '-') || (s[i] == '+')))
        {
            answer = answer + (temp * (s[i] - '0'));
            temp *= 10;    
        }
        
        else
            answer = (s[i] == '-') ? -1 * answer : answer;
    }
    
    return answer;
}