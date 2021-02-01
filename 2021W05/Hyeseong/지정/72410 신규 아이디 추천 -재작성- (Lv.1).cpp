// https://programmers.co.kr/learn/courses/30/lessons/72410
// 이미 푼거라
// 다시 풀어보았읍니다...


#include <string>
#include <cctype>

using namespace std;

string solution(string new_id)
{
	string answer = new_id;
	
	// Step1
	for (int i = 0; i < (int)answer.size(); ++i) answer[i] = tolower(answer[i]);
	
	// Step2
	for (auto it = answer.begin(); it != answer.end(); )
		{
			if (isalnum(*it) || *it == '-' || *it == '_' || *it == '.') it++;
			else it = answer.erase(it);
		}
	
	// Step3
	bool flag = false;
	
	for (auto it = answer.begin(); it != answer.end(); )
		{
			if ((flag == false) && (*it == '.'))
				{
					flag = true;
					it = answer.erase(it);
				}
			
			else if ((flag == true) && (*it == '.'))
				{
					flag = true;
					it = answer.erase(it);
				}
			
			else if ((flag == true) && (*it != '.'))
				{
					flag = false;
					it = answer.insert(it, '.');
					
					++it;
				}
			
			else ++it;
		}
	
	// Step4
	auto it = answer.begin();
	if (*it == '.') answer.erase(it);
	
	if (answer[(int)answer.size() - 1] == '.') answer.pop_back();
	
	// Step5
	if (answer == "") answer = "a";
	
	// Step6
	answer = answer.substr(0, 15);
	if (answer[(int)answer.size() - 1] == '.') answer.pop_back();
	
	// Step7
	while ((int)answer.size() <= 2) answer.push_back(answer[(int)answer.size() - 1]);
	
	return answer;
}