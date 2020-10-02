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

void printGraph(vector<int>adj[], int v)
{
	for (int i = 0; i < v; ++i)
	{
		cout << i << " ";
		for (auto x : adj[i])
			cout << x << " ";
		cout << endl;
	}
}

void BFS(vector<int>adj[], int v, int s)
{
	bool visited[v] = {false};
	queue<int> q;
	visited[s] = true;
	q.push(s);

	while (!q.empty())
	{
		int x = q.front();
		q.pop();

		cout << x << " ";
		for (auto v : adj[x])
		{
			if (!visited[v])
			{
				visited[v] = true;
				q.push(v);
			}
		}
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
