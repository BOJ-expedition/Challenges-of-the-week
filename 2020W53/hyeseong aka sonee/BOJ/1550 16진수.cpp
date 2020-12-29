// https://www.acmicpc.net/source/24701518

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	
	auto i = s.rbegin();
	
	int point = 1;
	int n = 0;
	
	while (i != s.rend())
	{
		if (('0' <= (*i)) && ((*i) <= '9'))
			n += ((*i) - '0') * point;
			
		else if (('A' <= (*i)) && ((*i) <= 'F'))
			n += ((*i) - 'A' + 10) * point;
			
		point *= 16;
		i++;
	}
	
	cout << n;
	
	return 0;
}