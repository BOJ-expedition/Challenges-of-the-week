// https://programmers.co.kr/learn/courses/30/lessons/42888

#include <string>
#include <sstream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<string> solution(vector<string> record)
{
	vector<string> answer;
	vector<vector<string>> log;
    
	unordered_map<string, string> umap;
	string buf;
	
	for (int i = 0; i < (int)record.size(); ++i)
	{
		vector<string> temp;
		istringstream iss(record[i]);
		
		while (getline(iss, buf, ' '))
			temp.emplace_back(buf);
		
		log.emplace_back(temp);
	}
	
	for (int i = 0; i < (int)log.size(); ++i)
	{
		if ((int)log[i].size() == 3) // Enter or Change
			umap[log[i][1]] = log[i][2];
	}
	
	for (int i = 0; i < (int)log.size(); ++i)
	{
		if (log[i][0] == "Enter")
			answer.emplace_back(umap[log[i][1]] + "님이 들어왔습니다.");
		
		else if (log[i][0] == "Leave")
			answer.emplace_back(umap[log[i][1]] + "님이 나갔습니다.");
	}
	
	return answer;
}