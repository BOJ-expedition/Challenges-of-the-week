// https://programmers.co.kr/learn/courses/30/lessons/12906

#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    
    answer.emplace_back(arr.front());
    
    for (int i = 1; i < (int)arr.size(); ++i)
    {
        if (answer.back() != arr[i])
            answer.emplace_back(arr[i]);
    }

    return answer;
}