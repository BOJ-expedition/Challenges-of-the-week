/*
    후보키
    https://programmers.co.kr/learn/courses/30/lessons/42890
*/

#include <string>
#include <sstream>
#include <vector>
#include <set>
#include <list>

using namespace std;

using tuple_t = vector<string>;
using relation_t = vector<tuple_t>;

string tuple_to_key(const tuple_t& v, size_t idxs)
{
    ostringstream oss;
    for(size_t i=0;i!=8;++i)
        if(idxs & (1<<i))
            oss << v[i] << "$";
    return oss.str();
}

bool is_unique_key(const relation_t& relation, size_t idxs)
{
    set<string> s;
    for(auto& tuple:relation){
        string key = tuple_to_key(tuple,idxs);
        if(s.find(key) != s.end())
            return false;
        s.insert(key);
    }
    return true;
}

size_t count_bit(size_t num)
{
    size_t count = 0;
    do
        count += num & 1;
    while(num >>= 1);
    return count;
}

bool has_subset(const list<size_t>& subsets, size_t set)
{
    for(size_t subset:subsets)
        if((subset|set) == set)
            return true;
    return false;
}


int solution(relation_t relation) {
    size_t bit_count = relation[0].size();
    size_t max = 1 << bit_count;
    list<size_t> answer;
    list<size_t> tables[9];
    
    for(size_t i=1; i!=max; ++i)
        tables[count_bit(i)].push_back(i);
    
    for(auto& table: tables)
        for(size_t idx: table)
            if(not has_subset(answer, idx) && is_unique_key(relation, idx))
                answer.push_back(idx);
    return answer.size();
}