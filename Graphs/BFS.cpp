#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> bfs(vector<vector<int>> &adj){
    int v = adj.size();
    vector<bool> visited(v,false); // shows vertex visited or not
    vector<int> result; //bfs traversal is stored in this vector
    queue<int> q; // maintains the list of vertices yet to be explored
    
    int x = 0;
    visited[x] = true;
    q.push(x);
    while(!q.empty()){
        int curr = q.front();
        result.push_back(curr);
        q.pop();
        
        for (int a : adj[curr]){
            if(!visited[a])
            {
                visited[a] = true;
                q.push(a);
            }
        }
            
    }
    return result;
}
void addEdge(vector<vector<int>> &adj, int u , int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main()
{
   int v = 5;
   vector<vector<int>> adj(v);
   addEdge(adj , 1,2);
   addEdge(adj , 1, 0);
    addEdge(adj, 2, 0);
    addEdge(adj, 2, 3);
    addEdge(adj, 2, 4);
    vector<int> res = bfs(adj);
    for(int i : res){
        cout << i << " ";
    }
   

    return 0;
}
