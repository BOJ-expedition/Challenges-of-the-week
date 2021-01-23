// https://programmers.co.kr/learn/courses/30/lessons/12901

#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    vector<int> max_days = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector<string> day_name = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    
    int day_count = 0;
    
    for (int i = 0; i < a - 1; ++i)
        day_count += max_days[i];
    
    day_count += (b - 1);
    
    return day_name[day_count % 7];
}