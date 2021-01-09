// https://programmers.co.kr/learn/courses/30/lessons/12937

#include <string>
#include <vector>

using namespace std;

string solution(int num)
{
    return (num % 2) == 0 ? "Even" : "Odd";
}