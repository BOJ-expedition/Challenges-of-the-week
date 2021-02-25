/*
    가사 검색
    https://programmers.co.kr/learn/courses/30/lessons/60060
*/
#include <bits/stdc++.h>

using namespace std;

bool match(string_view str, string_view pattern)
{
    for (size_t i = 0; i != str.size(); ++i) {
        if (pattern[i] == '?')
            return true;
        if (str[i] != pattern[i])
            return false;
    }
    return true;
}

class trie
{
    struct node_t
    {
        size_t count;
        string str;
        unique_ptr<node_t> next['z' - 'a' + 1];
        node_t() :count(0), str(""), next() {}
        node_t(string str) :count(1), str(str), next() {}
    };
    unique_ptr<node_t> nodes[10001];
public:
    trie();
    ~trie();
    void insert(string_view word);
    size_t count(string_view query);
};

trie::trie() {}
trie::~trie() {}

void trie::insert(string_view word)
{
    using it = string_view::iterator;
    static function<void(node_t*, it, it)> insert = [](node_t* node, it begin, it end) {
        ++node->count;

        if (node->count == 1) {
            node->str = string(begin, end);
            return;
        }

        char idx = *begin - 'a';

        if (node->count == 2) {
            node->next[idx] = make_unique<node_t>(string(begin + 1, end));

            string_view sv = node->str;

            insert(node, sv.begin(),sv.end());
            --node->count;
            return;
        }

        if (!node->next[idx].get()) {
            node->next[idx] = make_unique<node_t>(string(begin + 1, end));
            return;
        }

        insert(node->next[idx].get(), begin + 1, end);
    };

    node_t* node = nodes[word.size()].get();

    if (!node) {
        auto& unique = nodes[word.size()] = make_unique<node_t>();
        node = unique.get();
    }

    insert(node, word.begin(), word.end());
}

size_t trie::count(string_view query)
{
    node_t* node = nodes[query.size()].get();

    if (!node)
        return 0;

    using it = string_view::iterator;
    static function<size_t(node_t*, it, it)> count = [](node_t* node, it begin, it end)->size_t {
        if (!node)
            return static_cast<size_t>(0);

        if (begin == end)
            return static_cast<size_t>(1);

        if (*begin == '?')
            return node->count;

        if (node->count == 1)
            return match(node->str,string(begin, end));

        return count(node->next[*begin - 'a'].get(), begin + 1, end);
    };

    return count(node, query.begin(), query.end());
}

string reversed(string_view sv)
{
    return string(sv.rbegin(), sv.rend());
}

vector<int> solution(vector<string> words, vector<string> queries) {
    vector<int> answer;
    trie forward;
    trie backward;

    for (auto& word : words) {
        forward.insert(word);
        backward.insert(reversed(word));
    }

    for (auto& query : queries) {
        if (query[0] == '?')
            answer.push_back(backward.count(reversed(query)));
        else
            answer.push_back(forward.count(query));
    }

    return answer;
}