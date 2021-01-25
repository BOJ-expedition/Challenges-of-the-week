// https://programmers.co.kr/learn/courses/30/lessons/72410

#include <string>

using namespace std;

string step1(string s)
{
	for (int i = 0; i < (int)s.size(); ++i)
	{
		if ('A' <= s[i] && s[i] <= 'Z')
			s[i] -= ('A' - 'a');
	}

	return s;
}

string step2(string s)
{
	const string usable_char = "0123456789abcdefghijklmnopqrstuvwxyz-_.";

	for (auto it = s.begin(); it != s.end();)
	{
		bool flag = false;

		for (int i = 0; i < (int)usable_char.size(); ++i)
		{
			if (*it == usable_char[i])
			{
				flag = true;
				break;
			}
		}

		if (flag == false)
			it = s.erase(it);

		else
			++it;
	}

	return s;
}

string step3(string s)
{
	bool flag = false;

	for (auto it = s.begin(); it != s.end(); )
	{
		if ((flag == false) && (*it == '.'))
		{
			flag = true;
			it = s.erase(it);
		}

		else if ((flag == true) && (*it == '.'))
		{
			flag = true;
			it = s.erase(it);
		}

		else if ((flag == true) && (*it != '.'))
		{
			flag = false;
			it = s.insert(it, '.');

			++it;
		}

		else
		{
			++it;
		}
	}

	return s;
}

string step4(string s)
{
	auto it = s.begin();

	if (*it == '.')
		s.erase(it);

	if (s[(int)s.size() - 1] == '.')
		s.pop_back();

	return s;
}

string step5(string s)
{
	if (s == "")
		s = "a";

	return s;
}

string step6(string s)
{
	while ((int)s.size() >= 16)
		s.pop_back();

	auto itr = s.rbegin();

	if (*itr == '.')
		s.pop_back();

	return s;
}

string step7(string s)
{
	while ((int)s.size() <= 2)
		s.push_back(s[(int)s.size() - 1]);

	return s;
}

string solution(string new_id)
{
	string answer = new_id;

	answer = step1(answer);
	answer = step2(answer);
	answer = step3(answer);
	answer = step4(answer);
	answer = step5(answer);
	answer = step6(answer);
	answer = step7(answer);

	return answer;
}