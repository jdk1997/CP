#include<bits/stdc++.h>
#include<list>
using namespace std;

class graph
{
	int n = 0;
	list<int> *adj;

public:
	graph(int n)
	{
		this->n = n;
		adj = new list<int>[n];
	}

	void add(int v, int w)
	{
		adj[v].push_back(w);
	}

	void bfs(int s)
	{
		bool *visit = new bool[n];
		for(int l = 1; l <= n; l++)
		{	
			visit[l] = false;
		}
		list<int> q;
		list<int>::iterator it;
		visit[s] = true;
		q.push_back(s);
		while(!q.empty())
		{
			s = q.front();
			cout<<s<<" ";
			q.pop_front();
			for(it = adj[s].begin(); it != adj[s].end(); it++)
			{
				if(!visit[*it])
				{
					visit[*it] = true;
					q.push_back(*it);
				}
			}
		}
	}
};

int main()
{
	ios::sync_with_stdio(false);
	int v = 0, x = 0, y = 0;
	cin>>v;
	graph g(v);
	for(int j = 1; j < v; j++)
	{
		cin>>x>>y;
		g.add(x, y);
	}
	g.bfs(1);
	return 0;
}