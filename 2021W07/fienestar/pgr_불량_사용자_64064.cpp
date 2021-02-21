/*
    불량 사용자
    https://programmers.co.kr/learn/courses/30/lessons/64064
*/

#include <bits/stdc++.h>

using namespace std;

bool match(string_view str,string_view pattern)
{
    if(str.size() != pattern.size())
        return false;
    
    for(size_t i=0;i!=str.size();++i)
        if(str[i] != pattern[i] && pattern[i] != '*')
            return false;
    
    return true;
}

int solution(vector<string> user_id, vector<string> banned_id) {
    function<void(void)> check;
    function<void(size_t)> dfs;
    
    size_t cnt = 0;
    
    check = [&user_id,&banned_id,&cnt](){
        static set<string> is_used;
        for(size_t i=0;i!=banned_id.size();++i)
            if(!match(user_id[i],banned_id[i]))
                return;
        
        vector<string> sliced(user_id.begin(),user_id.begin()+banned_id.size());
        sort(sliced.begin(),sliced.end());
        
        ostringstream oss;
        for(size_t i=0;i!=sliced.size();++i)
            oss << sliced[i] << ","[i+1==sliced.size()];
        string idx = oss.str();
        
        if(is_used.find(idx) != is_used.end())
            return;
        
        is_used.insert(idx);
        
        cout << "[" << idx << "]\n";
        ++cnt;
    };
    
    dfs = [&dfs,&user_id,&banned_id,&check](size_t n){
        if(n==banned_id.size())
            return check();
        
        for(size_t i=n;i!=user_id.size();++i){
            swap(user_id[n],user_id[i]);
            dfs(n+1);
            swap(user_id[n],user_id[i]);
        }
    };
    
    dfs(0);
    return cnt;
}