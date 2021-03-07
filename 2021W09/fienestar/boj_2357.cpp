/*
    최솟값과 최댓값
    https://www.acmicpc.net/problem/2357
*/
#include <bits/stdc++.h>

using namespace std;

template <class T>
class static_segment_tree
{
	vector<T> m_tree;
	function<T(const T&, const T&)> m_join;
	
	void init()
	{
		for (size_t i = m_tree.size() >> 1; --i;)
			m_tree[i] = m_join(m_tree[i << 1], m_tree[i << 1 | 1]);
	}
public:
	static_segment_tree(function<T(const T&, const T&)> join, size_t n)
		:m_tree(n << 1),m_join(join) {
		init();
	}

	template <class It>
	static_segment_tree(function<T(const T&, const T&)> join, It begin, It end)
		:m_tree(), m_join(join)
	{
		size_t n = distance(begin, end);
		m_tree.resize(n << 1);
		for (size_t i = 0; i != n; ++i)
			m_tree[n + i] = *begin++;

		init();
	}

	void query(size_t begin, size_t end, function<void(const T&)> query)
	{
		begin += m_tree.size() >> 1;
		end += m_tree.size() >> 1;

		for (; begin < end; begin >>= 1, end >>= 1)
		{
			if (begin & 1)query(m_tree[begin++]);
			if (end & 1)query(m_tree[--end]);
		}
	}

	void update(size_t i, const T& val)
	{
		m_tree[i += (m_tree.size() >> 1)] = val;
		for (; i >>= 1;)
			m_tree[i] = m_join(m_tree[i << 1], m_tree[i << 1 | 1]);
	}
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    size_t N,M;
    cin >> N >> M;

    vector<int> input(N);
    for(auto& c:input)
        cin >> c;

    static_segment_tree<int> max_st([](int a,int b){return max({a,b});},input.begin(),input.end());
    static_segment_tree<int> min_st([](int a,int b){return min({a,b});},input.begin(),input.end());

    while(M--){
        size_t a,b;
        cin >> a >> b;
        
        int M = 1;
        int m = 1'000'000'000;

        max_st.query(a-1,b,[&M](int v){M = max({M,v});});
        min_st.query(a-1,b,[&m](int v){m = min({m,v});});

        cout << m << " " << M << "\n";
    }
}