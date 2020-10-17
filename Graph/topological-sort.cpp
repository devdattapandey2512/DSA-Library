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
}  
void topological_sort(vector<int> adj[], vector<int> indegree, int v, int topological[])
{
    int count = 0;
    queue<int> q;
    for(int i=0; i<v; i++)
    {
        if(indegree[i] == 0)
        {
            q.push(i);
        }
    }
    while(!q.empty())
    {
        int x = q.front();
        topological[count++] = x;//.push_back(x);
        q.pop();
        for(int u: adj[x])
        {
            indegree[u]--;
            if(indegree[u] == 0)
            q.push(u);
        }
    }
    
}

int main() 
{ 
    int v, e;
    cin >> v >> e;
    vector<int> adj[v];
    vector<int> indegree(v, 0);
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        indegree[y]++;
        Addedge(adj, x, y);
    }
    int topological[v];
    topological_sort(adj, indegree, v, topological);
    for(int i=0; i<v; i++)
    {
        cout << topological[i] << " ";
    }
    return 0; 
} 