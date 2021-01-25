// https://www.acmicpc.net/source/25675054

#include <iostream>
using namespace std;

int main(void)
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, m;
		cin >> n >> m;

		if (n == m)
			cout << "1" << endl;

		else
		{
			unsigned long long result = 1;

			if (n > m / 2)
				n = m - n;

			for (int i = m; i > m - n; --i)
				result *= i;

			for (int i = n; i > 0; --i)
				result /= i;

			cout << result << endl;
		}
	}

	return 0;
}