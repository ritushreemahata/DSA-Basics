#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj; // graph represented as an adjacency list
int n; // number of vertices

vector<int> visited, color;
vector<int> parent;
int cyclic = 0;
void printcycle(int v, int u)
{
    int x=v;
    cout<<v<<" ";
    while(x != u)
    {
        x = parent[x];
        cout<<x<<" ";
    }
}
void dfs(int v) {
    
    color[v] = 1;
    visited[v] = true;
    for (int u : adj[v]) 
    {
        
        if (!visited[u])
        {
            parent[u] = v;
            dfs(u);
        }
        else
        {
            if(color[u] == 1 && u!= parent[v])
            {
            cyclic = 1;
            printcycle(v,u);
            }
        }
    }
    color[v] = 2;
}

int main()
{
    int n,m; //n-vertices, m-edges
    cin>>n>>m;
    adj.resize(n+1);
    visited.resize(n+1,0);
    color.resize(n+1, 0);
    parent.resize(n+1, 0);
    parent[0] = -1;
    
    for(int i=0; i<m; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(0);
    if(cyclic == 1)
    cout<<" The graph has a cycle.";
    else 
    cout<<"There is no cycle in the graph";
    return 0;
}
