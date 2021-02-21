/*
    단체사진 찍기
    https://programmers.co.kr/learn/courses/30/lessons/1835
*/

#include <bits/stdc++.h>

using namespace std;

vector<char> p = {'A','C','F','J','M','N','R','T'};
size_t cnt;
function<void(void)> check;

bool isValid(size_t dis, char op, size_t value)
{
    switch(op)
    {
        case '=':
            return dis == value;
        case '<':
            return dis < value;
        case '>':
            return dis > value;
        default:
            throw std::invalid_argument("두번째 인자는 =,<,>중 하나여야합니다.");
    }
}

bool isValid(string& con)
{
    size_t dis = abs(find(p.begin(),p.end(),con[0]) - find(p.begin(),p.end(),con[2])) - 1;
    return isValid(dis,con[3],con[4]-'0');
}

void dfs(size_t n)
{
    if(n==8)
        return check();
    
    for(size_t i=n;i!=8;++i){
        swap(p[n],p[i]);
        dfs(n+1);
        swap(p[n],p[i]);
    }
}

int solution(int n, vector<string> data) {
    cnt = 0;
    
    check = [&data]()->void{
        for(auto& s:data)
            if(!isValid(s))
                return;
        ++cnt;
    };
    
    dfs(0);
    
    return cnt;
}