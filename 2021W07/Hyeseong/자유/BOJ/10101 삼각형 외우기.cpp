// https://www.acmicpc.net/source/26610374

#include <iostream>
using namespace std;

int main(void)
{
	int a, b, c;
	cin >> a >> b >> c;
	
	if (a == 60 && b == 60 && c == 60)
		cout << "Equilateral";
	
	else if (a + b + c == 180 && ((a == b) || (b == c) || (a == c)))
		cout << "Isosceles";
	
	else if (a + b + c == 180)
		cout << "Scalene";
	
	else
		cout << "Error";
	
	return 0;
}