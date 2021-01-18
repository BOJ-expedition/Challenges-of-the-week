// https://www.acmicpc.net/source/25420574

#include <iostream>
using namespace std;

int main(void)
{
	double x1, y1, x2, y2;
	int n;
	double cx, cy, r;

	int T;
	cin >> T;

	while (T--)
	{
		int cnt = 0;

		cin >> x1 >> y1 >> x2 >> y2;

		cin >> n;

		while (n--)
		{
			cin >> cx >> cy >> r;

			if (((cx - x1)*(cx - x1) + (cy - y1)*(cy - y1) <= r * r) ^ ( (cx - x2)*(cx - x2) + (cy - y2)*(cy - y2) <= r * r) )
				cnt++;
		}

		cout << cnt << endl;
	}

	return 0;
}
