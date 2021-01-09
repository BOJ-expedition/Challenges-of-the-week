// https://programmers.co.kr/learn/courses/30/lessons/12943

#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int ans = 0;
    long temp = num;
    
    while ((ans < 500) && (temp != 1))
    {
        temp = ((temp % 2) == 0) ? (temp / 2) : ((temp * 3) + 1);
        ans++;
    }
        
    
    return (temp != 1) ? -1 : ans;
}