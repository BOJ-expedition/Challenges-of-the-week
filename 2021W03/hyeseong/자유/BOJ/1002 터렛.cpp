// https://www.acmicpc.net/source/25420512

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(void)
{
	int T;
	int temp;
	
	double D;
	double R;
	double r;
	
	vector < vector<int> > AllCase;
	vector < int > Case;
	vector < int > Result;
	
	cin >> T;
	
	for (int i = 0; i < T; ++i)
		{
			for (int j = 0; j < 6; ++j)
				{
					cin >> temp;
					
					Case.push_back(temp);
				}
			
			AllCase.push_back(Case);
			Case.clear();
		}
	
	for (int i = 0; i < T; ++i)
		{
			R = (AllCase[i][2] >= AllCase[i][5] ? AllCase[i][2] : AllCase[i][5]);
			r = (AllCase[i][2] >= AllCase[i][5] ? AllCase[i][5] : AllCase[i][2]);
			D = sqrt(pow(AllCase[i][3] - AllCase[i][0], 2) + pow(AllCase[i][4] - AllCase[i][1], 2));
			
			if (D > R + r)
				cout << "0" << endl;
			
			else if (D < R - r)
				cout << "0" << endl;
			
			else if (D == R + r)
				{
					if (R == r && D == 0)
						cout << "-1" << endl;
					
					else
						cout << "1" << endl;
				}
			
			else if (D == R - r)
				{
					if (R == r && D == 0)
						cout << "-1" << endl;
					
					else
						cout << "1" << endl;
				}
			
			else if (R - r < D && D < R + r)
				cout << "2" << endl;
		}
	
	return 0;
}