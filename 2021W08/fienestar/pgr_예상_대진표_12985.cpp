/*
    예상 대진표
    https://programmers.co.kr/learn/courses/30/lessons/12985
*/
int solution(int n, int a, int b)
{
    return 32-__builtin_clz((a-1)^(b-1));
}