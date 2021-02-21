// https://www.acmicpc.net/source/26610322

#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int g;
	int t = 0;
	
	for (int i = 0; i < 5; ++i)
		{
			cin >> g;
			
			if (g < 40)
				g = 40;
			
			t += g;
		}
	
	cout << t / 5;
	
	return 0;
}