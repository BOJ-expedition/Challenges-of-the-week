// https://programmers.co.kr/learn/courses/30/lessons/12935

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer = arr;
    int min_idx = 0;
    
    for (int i = 0; i < (int)answer.size(); ++i)
    {
        if (arr[min_idx] > arr[i])
            min_idx = i;
    }
    
    arr.erase(arr.begin() + min_idx);
    
    if ((int)arr.size() == 0)
        arr.emplace_back(-1);
    
    return arr;
}