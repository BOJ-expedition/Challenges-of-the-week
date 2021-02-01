// https://programmers.co.kr/learn/courses/30/lessons/68935

#include <vector>
using namespace std;

int solution(int n)
{
    int answer = 0;
    vector<int> v;
    
    int b = 1;
    
    while (n != 0)
    {
    	v.emplace_back(n % 3);
        n /= 3;
    }
    
    for (auto it = v.rbegin(); it != v.rend(); ++it)
    {
    	answer += ((*it) * b);
    	b *= 3;
    }
    
    return answer;
}