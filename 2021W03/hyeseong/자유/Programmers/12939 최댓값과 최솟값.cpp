// https://programmers.co.kr/learn/courses/30/lessons/12939

#include <string>
#include <vector>

using namespace std;

string solution(string s) {
	auto i = s.rbegin();
	vector<int> v;
	
	int x = 1;
	bool positive = true;
	
	int n = 0;
	
	while (i != s.rend())
		{
			if ('0' <= *i && *i <= '9')
				{
					n += ((*i) - '0') * x;
					x *= 10;
				}
			
			if (*i == '-')
				{
					n *= -1;
				}
			
			if ((*i == ' ') || ((i+1) == s.rend()))
				{
					v.push_back(n);
					
					x = 1;
					positive = true;
					n = 0;
				}
			
			i++;
		}
	
	int min = v[0];
	int max = v[0];
	
	for (auto i : v)
		{
			if (min > i)
				min = i;
			
			if (max < i)
				max = i;
		}
	
	string answer = to_string(min) + " " + to_string(max);
	
	return answer;
}