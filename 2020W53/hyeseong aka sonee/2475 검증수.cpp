// https://www.acmicpc.net/source/24701637

#include <iostream>
using namespace std;

int main()
{
	int x = 0;
	int result = 0;
	
	for (int i = 0; i < 5; ++i)
	{
		cin >> x;
		
		result += (x*x);
	}
	
	cout << result % 10;
	
	return 0;
}