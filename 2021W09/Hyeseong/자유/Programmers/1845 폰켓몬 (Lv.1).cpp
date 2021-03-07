// https://programmers.co.kr/learn/courses/30/lessons/1845

#include <vector>
#include <set>
using namespace std;

int solution(vector<int> nums)
{
    set<int> s(nums.begin(), nums.end());
    int n = (int)nums.size() / 2;
    
    return n <= (int)s.size() ? n : (int)s.size();
}