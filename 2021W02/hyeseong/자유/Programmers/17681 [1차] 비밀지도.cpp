// https://programmers.co.kr/learn/courses/30/lessons/17681

#include <string>
#include <vector>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    
    for (int i = 0; i < n; ++i)
    {
        string s = "";
        
        int tmp = arr1[i] | arr2[i];
        
        for (int j = 0; j < n; ++j)
        {
            string t = (tmp & 1) ? "#" : " ";
            s = t + s;
            
            tmp >>= 1;
        }
        
        answer.emplace_back(s);
    }
    
    return answer;
}