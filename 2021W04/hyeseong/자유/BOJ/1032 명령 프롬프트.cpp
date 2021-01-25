// https://www.acmicpc.net/source/25675143

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void)
{
	vector<string> fileName;
	string temp;

	int N = 0;
	int l = 0;
	bool check = true;

	int i, j;

	cin >> N;

	for (i = 0; i < N; ++i)
	{
		cin >> temp;
		fileName.push_back(temp);
	}
	
	l = temp.size();
	temp.clear();

	for (i = 0; i < l; ++i)
	{
		check = true;

		for (j = 0; j < N - 1; ++j)
		{
			if (fileName[j][i] != fileName[j + 1][i])
			{
				check = false;
				break;
			}
		}

		if (check == true)
			temp.push_back(fileName[j][i]);

		else
			temp.push_back('?');
	}

	cout << temp;


	return 0;
}