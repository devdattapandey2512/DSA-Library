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
void DFSRec(vector<int> adj[], int s, bool visited[])
{
    visited[s] = true;
    cout << s << " ";

    for(int u: adj[s])
        if(!visited[u])
        DFSRec(adj, u, visited);
}

void DFS(vector<int> adj[], int v, int s)
{
    bool visited[v] = {false};

    DFSRec(adj, s, visited);
}
int main()
{
	std::ios::sync_with_stdio(false);
	int v, e;
    cin >> v >> e;
	vector<int> adj[v];
    for(int i=0; i<e; i++)
    {
        int x, y;
        cin >> x >> y;
        Addedge(adj, x, y);
    }
	DFS(adj, v, 0);

	return 0;
}