// https://programmers.co.kr/learn/courses/30/lessons/42747

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations)
{
    int answer = 0;
    int n = (int)citations.size();

    sort(citations.begin(), citations.end());

    for (int i = n; i >= 1; --i)
    {
        if (citations[n - i] >= i)
        {
            answer = i;
            break;
        }
    }

    return answer;
}