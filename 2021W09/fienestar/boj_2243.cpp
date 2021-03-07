/*
    사탕상자
    https://www.acmicpc.net/problem/2243
*/
#include <bits/stdc++.h>

using namespace std;

template <class T>
class static_segment_tree
{
public:
	vector<T> m_tree;
	function<T(const T&, const T&)> m_join;
	
	void init()
	{
		for (size_t i = m_tree.size() >> 1; --i;)
			m_tree[i] = m_join(m_tree[i << 1], m_tree[i << 1 | 1]);
	}

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

	const T& get_element(size_t i)
	{
		return m_tree[i];
	}

	const T& get_leaf(size_t i)
	{
		return m_tree[i+(m_tree.size() >> 1)];
	}
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    static_segment_tree<int> st([](int a,int b){return a+b;},1048576);

	size_t N;
	cin >> N;
	while(N--)
	{
		int type,rank;
		cin >> type >> rank;

		if(type == 1){
			size_t i = 1;
			size_t end_index_min = st.m_tree.size() >> 1;

			while(i < end_index_min){
				i <<= 1;
				auto value = st.get_element(i);

				if(value < rank) {
					rank -= value;
					i |= 1;
				}
			}

			i-= end_index_min;
			st.update(i, st.get_leaf(i) - 1);
			cout << i + 1 << "\n";
		}else{
			int count;
			cin >> count;
			--rank;
			st.update(rank, st.get_leaf(rank) + count);
		}
	}
}