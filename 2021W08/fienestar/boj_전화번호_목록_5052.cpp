/*
    전화번호 목록
    https://www.acmicpc.net/problem/5052
*/
#include <bits/stdc++.h>

using namespace std;

class trie
{
    struct node_t
    {
        size_t count;
        string str;
        unique_ptr<node_t> next['9' - '0' + 1];
        node_t() :count(0), str(""), next() {}
        node_t(string str) :count(1), str(str), next() {}
    };
    unique_ptr<node_t> node;
public:
    trie();
    ~trie();
    bool insert(string_view word);
};

trie::trie()
:node(make_unique<node_t>()) {}
trie::~trie() {}

bool trie::insert(string_view word)
{
    using it = string_view::iterator;
    static function<bool(node_t*, it, it)> insert = [](node_t* node, it begin, it end) {
        if(begin == end && node->count)
            return false;
        
        ++node->count;

        if (node->count == 1) {
            node->str = string(begin, end);
            return true;
        }

        char idx = *begin - '0';

        if (node->count == 2) {
            node->next[idx] = make_unique<node_t>(string(begin + 1, end));

            string_view sv = node->str;

            if(not insert(node, sv.begin(),sv.end()))
                return false;
            --node->count;
            return true;
        }

        if (!node->next[idx].get()) {
            node->next[idx] = make_unique<node_t>(string(begin + 1, end));
            return true;
        }

        return insert(node->next[idx].get(), begin + 1, end);
    };

    return insert(node.get(), word.begin(), word.end());
}

bool solve()
{
    size_t N;
    string S;
    trie t;
    bool result = true;
    cin >> N;
    while(N--){
        cin >> S;
        if(result && !t.insert(S))
            result = false;
    }
    return result;
}

int main()
{
    size_t T;
    cin >> T;
    while(T--)
        cout << (solve()?"YES\n":"NO\n");
}
