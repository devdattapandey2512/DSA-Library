#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define mod 1000000007
#define inf 1000000000000000001;

using namespace std;

void Addedge(vector<int> adj[], int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

void BFS(vector<int>adj[], int s, bool visited[])
{
	queue<int> q;
	visited[s] = true;
	q.push(s);

	while (!q.empty())
	{
		int u = q.front();
		q.pop();

		cout << u << " ";
		for (auto v : adj[u])
		{
			if (!visited[v])
			{
				visited[v] = true;
				q.push(v);
			}
		}
	}
}
void BFSDim(vector<int>adj[], int v)			//for cases where whole graph is not connected and no source is given
{
	bool visited[v] = {false};					//O(V+E)


	for (int i = 0; i < v; ++i)
	{
		if (!visited[i])
			BFS(adj, i, visited);
	}

}
int main()
{
	std::ios::sync_with_stdio(false);
	int v = 4;
	vector<int> adj[v];
	Addedge(adj, 0, 1);
	Addedge(adj, 0, 2);
	Addedge(adj, 1, 2);
	Addedge(adj, 1, 3);

	BFS(adj, v, 0);

	return 0;
}
