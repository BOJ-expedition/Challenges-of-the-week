// https://programmers.co.kr/learn/courses/30/lessons/42862

#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve)
{
	int answer = 0;
	bool flag = false;
    
    auto lost_it = lost.begin();

	while (lost_it != lost.end())
	{
		auto reserve_it = reserve.begin();
		flag = false;

		while (reserve_it != reserve.end())
		{
			if (lost_it == lost.end())
				break;

			if ((*lost_it == *reserve_it))
			{
				flag = true;

				lost_it = lost.erase(lost_it);
				reserve_it = reserve.erase(reserve_it);
			}

			else
				reserve_it++;
		}

		if (flag != true)
			lost_it++;
	}
    
	lost_it = lost.begin();

	while (lost_it != lost.end())
	{
		auto reserve_it = reserve.begin();
		flag = false;

		while (reserve_it != reserve.end())
		{
			if (lost_it == lost.end())
				break;

			if ((*lost_it == *reserve_it) || (*lost_it == (*reserve_it) - 1) || (*lost_it == (*reserve_it) + 1))
			{
				flag = true;

				lost_it = lost.erase(lost_it);
				reserve_it = reserve.erase(reserve_it);
			}

			else
				reserve_it++;
		}

		if (flag != true)
			lost_it++;
	}

	answer = n - (int)lost.size();

	return answer;
}