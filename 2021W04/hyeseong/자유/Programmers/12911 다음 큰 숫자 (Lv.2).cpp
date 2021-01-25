// https://programmers.co.kr/learn/courses/30/lessons/12911

#include <string>
#include <vector>

using namespace std;

int n_of_one(int x)
{
	int answer = 0;
	
	while (x > 0)
	{
		if (x & 1)
			++answer;
		
		x >>= 1;
	}
	
	return answer;
}

int solution(int n)
{
    int answer = 0;
    
    int num = n_of_one(n);
    
    for (int i = n+1; ; ++i)
    {
    	if (num == n_of_one(i))
    	{
    		answer = i;
    		break;
    	}
    }
    
    return answer;
}