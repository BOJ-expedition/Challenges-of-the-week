// https://programmers.co.kr/learn/courses/30/lessons/12949

#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2)
{
    vector<vector<int>> answer;

    int arr1_r = (int)arr1.size();
    int arr1_c = (int)arr1[0].size();

    int arr2_r = (int)arr2.size();
    int arr2_c = (int)arr2[0].size();

    for (int i = 0; i < arr1_r; ++i)
    {
        vector<int> temp;

        for (int j = 0; j < arr2_c; ++j)
        {
            int sum = 0;

            for (int k = 0; k < arr1_c; ++k)
                sum += arr1[i][k] * arr2[k][j];

            temp.push_back(sum);
        }

        answer.push_back(temp);
    }
    
    return answer;
}