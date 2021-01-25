// https://programmers.co.kr/learn/courses/30/lessons/42747

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    int sz = (int)citations.size();
    
    sort(citations.begin(), citations.end());
    
    bool satisfy = false;
    
    for (int i = sz; i >= 0; --i)
    {
        satisfy = false;
        
        for (int j = sz - i; j < sz; ++j)
        {
            if (citations[j] < i)
            {
                satisfy = false;
                break;
            }

            else
                satisfy = true;
        }
        
        if (satisfy == true)
        {
            answer = i;
            break;
        }
    }

    return answer;
}