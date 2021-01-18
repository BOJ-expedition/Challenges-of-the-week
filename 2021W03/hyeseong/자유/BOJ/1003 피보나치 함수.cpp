// https://www.acmicpc.net/source/25420537

#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	vector<int> v;
	
	int N;
	int t;
	cin >> N;
	
	int elem1 = 0 , elem2 = 0, elem3 = 1;
	
	for (int i = 0; i < N; ++i)
		{
			v.clear();
			
			cin >> t;
			
			if (t == 0)
				{
					v.push_back(1);
					v.push_back(0);
				}
			
			else if (t == 1)
				{
					v.push_back(0);
					v.push_back(1);
				}
			
			else
				{
					elem1 = 0, elem2 = 0, elem3 = 1;
					
					for (int i = 1; i < t; ++i)
						{
							elem1 = elem2;
							elem2 = elem3;
							elem3 = elem1 + elem2;
						}
					
					v.push_back(elem2);
					v.push_back(elem3);
				}
			
			cout << v.front() << " " << v.back() << endl;
		}
	
	return 0;
}