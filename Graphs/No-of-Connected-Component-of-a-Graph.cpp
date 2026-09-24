#include<bits/stdc++.h>
using namespace std;
void dfs(int node, vector<vector<int>> &adj, vector<int> &visited) {
	visited[node] = 1;
	for(int i : adj[node]) {
		if (!visited[i]) {
			dfs(i,adj,visited);
		}
	}
}
int main() {
	int n,m;
	cin>>n>>m;
	vector<vector<int>> adj(n);
	vector<int> visited(n,0);
	for(int i = 0 ; i<m; i++) {
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	int count = 0;
	for(int i=0 ; i < n ; i++) {
		if(!visited[i]) {
			dfs(i,adj,visited);
			count++;
		}
	}
	cout << count <<endl;
	return 0;

}
