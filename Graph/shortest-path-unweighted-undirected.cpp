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
void shortest_path(vector<int> adj[], int s, int v, int dis[])
{
    bool visited[v] = {false};
    dis[s] = 0;
    visited[s] = true;
    queue<int> q;
    q.push(s);
    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        for(int u: adj[x])
        {
            if(!visited[u])
            {
                dis[u] = dis[x] + 1;
                q.push(u);
                visited[u] = true;
            }
        }
    }
}
int main() 
{ 
    int v, e;
    cin >> v >> e;
    vector<int> adj[v];
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        Addedge(adj, x, y);
    }
    int s;
    cin >> s;
    int dis[v] = {INT_MAX};
    shortest_path(adj, s, v, dis);
    for(int i =0; i<v; i++)
    {
        cout << dis[i] << " ";
    }
    return 0; 
} 