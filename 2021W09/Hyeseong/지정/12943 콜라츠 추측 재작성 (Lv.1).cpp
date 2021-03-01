// https://programmers.co.kr/learn/courses/30/lessons/12943

#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int ans = 0;
    long tmp = num;
    
    for (ans = 0; (ans < 500) && (tmp != 1); ans++)
    {
        if ((tmp % 2) == 0)
            tmp /= 2;
        
        else
            tmp = (tmp * 3) + 1;
    }
    
    if (tmp == 1)
        return ans;
    
    else
        return -1;
}