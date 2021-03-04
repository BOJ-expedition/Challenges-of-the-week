// https://programmers.co.kr/learn/courses/30/lessons/42577

#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book)
{
    sort(phone_book.begin(), phone_book.end());
    
    unordered_map<int, unordered_map<string, bool>> umap;
    
    for (int i = 0; i < (int)phone_book.size(); ++i)
    {
        int n = (int)phone_book[i].size();
        
        for (auto it = umap.begin(); it != umap.end(); ++it)
        {
            string s = phone_book[i].substr(0, it->first);
            
            if (umap[it->first][s] == true)
                return false;
        }
        
        umap[n] = unordered_map<string, bool>();
        umap[n][phone_book[i]] = true;
    }
    
    return true;
}