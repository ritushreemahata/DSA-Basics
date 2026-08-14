#include <iostream>
#include<vector>
using namespace std;

void dfsrec(vector<vector<int>> &adj , vector<bool> &visited , int s , vector<int> &result)
{
    visited[s] = true;
    result.push_back(s);
    
    for(int i : adj[s])
    {
        if (visited[i]==false)
        {
            dfsrec(adj,visited,i,result);
        }
    }
}
vector<int> dfs(vector<vector<int>> &adj){
    int n = adj.size();
    vector<bool> visited(n,false);
    vector<int> result;
    int i = 0;
    dfsrec(adj,visited,i,result);
    return result;
}
void addEdge(vector<vector<int>> &adj , int u , int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
    
}


int main()
{
  int n = 5;
  vector<vector<int>> adj(n);
  addEdge(adj,1,0);
  addEdge(adj,1,2);
  addEdge(adj,2,3);
  addEdge(adj,2,4);
  addEdge(adj,2,0);
  vector<int> result = dfs(adj);
  for (int i = 0; i < n; i++){
      cout << result[i]<< " ";
  }

}
