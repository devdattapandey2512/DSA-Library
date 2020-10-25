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
#define inf 1000000000000000001

using namespace std;

void Addedge(vector<pair<int, int>> adj[], int u, int v, int wt) 
{ 
    adj[u].push_back(make_pair(v, wt)); 
    adj[v].push_back(make_pair(u, wt)); //for directed graphs remove this statement
} 



// void print_graph(vector<pair<int, int>> adj[], int v)        //Uncomment to the print graph for debugging purpose
// {
//     for (int i = 0; i < v; i++) 
//     {
//         cout << i << "-> ";
//         for (auto x : adj[i]) 
//         {
//             cout << x.first << " ";
//         }
//         cout << endl;
//     }
// }

void dijktra_distance(vector <pair<int, int>> adj[], int v, int s, int dis[])
{
    priority_queue< pair<int, int>, vector <pair<int, int>> , greater<pair<int, int>>> pq;
    
    
    // int dis[v];
    // fill(dis, dis+v, INT_MAX);
    pq.push(make_pair(0, s));
    dis[s] = 0;
    
    while(!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();
        for(auto x: adj[u])
        {
            int V = x.first;
            int wt = x.second;
            
            if(dis[V] > dis[u] + wt)
            {
                dis[V] = dis[u] + wt;
                pq.push(make_pair(dis[V], V));
            }
        }
    }
    
    
}

int main()
{
    int v, e;
    cin >> v >> e;
    
    vector<pair<int, int>> adj[v];
    
    for (int i = 0; i < e; i++)
    {
        int x, y, wt;
        cin >> x >> y >> wt;
        Addedge(adj, x, y, wt);
    }
    
    int s;
    cin >> s;
    // print_graph(adj, v);
    
    int dis[v];
    fill(dis, dis+v, INT_MAX);
    dijktra_distance(adj, v, s, dis);
    
    for(int i =0; i < v; i++)
    {
        cout << dis[i] << " ";
    }
    return 0;
}