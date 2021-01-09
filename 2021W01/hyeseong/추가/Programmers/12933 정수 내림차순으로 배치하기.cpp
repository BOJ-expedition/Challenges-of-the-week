// https://programmers.co.kr/learn/courses/30/lessons/12933

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    long long mul = 1;
    vector<int> v;
    
    while (n > 0)
    {
        v.emplace_back(n % 10);
        n /= 10;
    }
    
    sort(v.begin(), v.end());
    
    auto i = v.begin();
    
    while (i != v.end())
    {
        answer += (*i) * mul;
        i++;
        
        mul *= 10;
    }
    
    return answer;
}