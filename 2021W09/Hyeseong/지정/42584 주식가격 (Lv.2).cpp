// https://programmers.co.kr/learn/courses/30/lessons/42584

#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<int> prices)
{
    vector<int> answer;

    int n = (int)prices.size();

    for (int i = 0; i < n; ++i)
    {
        bool flag = true;

        for (int j = i; j < n; ++j)
        {
            if (prices[i] > prices[j])
            {
                flag = false;
                answer.emplace_back(j - i);

                break;
            }
        }

        if (flag == true)
            answer.emplace_back(n - i - 1);
    }

    return answer;
}