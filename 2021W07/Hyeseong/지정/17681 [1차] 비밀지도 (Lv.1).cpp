// https://programmers.co.kr/learn/courses/30/lessons/17681


#include <string>
#include <vector>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    
    for (int i = 0; i < n; ++i)
    {
        int res = arr1[i] | arr2[i];
        
        string s = "";
        
        for (int j = 0; j < n; ++j)
        {
            if (res % 2 == 0)
                s = ' ' + s;
            
            else
                s = '#' + s;
            
            res /= 2;
        }
        
        answer.emplace_back(s);
    }
    
    return answer;
}