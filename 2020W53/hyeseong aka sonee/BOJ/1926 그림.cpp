// https://www.acmicpc.net/source/24700526

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int DIRECTION = 4;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int n, m;
vector<vector<int>> v;

int cnt = 1;

bool compare(int a, int b)
{
	return a > b;
}

void dfs(int y, int x, int c)
{
	v[y][x] = c;
	
	for (int i = 0; i < DIRECTION; ++i)
	{
		if ((0 <= y + dy[i]) && (y + dy[i] < n) && (0 <= x + dx[i]) && (x + dx[i] < m))
		{
			if (v[y + dy[i]][x + dx[i]] == 1)
				dfs(y + dy[i], x + dx[i], c);
		}
	}
}

void searchPaper()
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (v[i][j] == 1)
				dfs(i, j, ++cnt);
		}
	}
}

int main()
{
	cin >> n >> m;
	
	for (int i = 0; i < n; ++i)
	{
		vector<int> t;
		
		int temp = 0;
		
		for (int j = 0; j < m; ++j)
		{
			cin >> temp;
			t.emplace_back(temp);
		}
			
		v.emplace_back(t);
	}
	
	searchPaper();
	
	vector<int> info(250000, 0);
	
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (v[i][j] != 0)
				info[v[i][j]]++;
		}
	}
	
	sort(info.begin(), info.end(), compare);
	
	cout << cnt - 1 << endl;
	cout << info[0];
	
	return 0;
}