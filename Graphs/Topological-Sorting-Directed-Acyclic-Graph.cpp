#include<bits/stdc++.h>
using namespace std;

void dfs(int node,vector<vector<int>> &adj,stack<int> &st, vector<int>&visited) {
	visited[node] = 1;
	for(int i : adj[node]) {
		if(!visited[i]) {
			dfs(i,adj,st,visited);
		}
	}
	st.push(node);
}

vector<int> topologicalSort(vector<vector<int>> &adj) {
	int v = adj.size();
	vector<int> visited(v,0);
	stack<int> st;
	vector<int> ans;
	for(int i = 0 ; i <v ; i++) {
		if(!visited[i]) {
			dfs(i,adj,st,visited);

		}
	}
	while(!st.empty()) {
		ans.push_back(st.top());
		st.pop();
	}
	return ans;
}

int main() {
	int n, m ;
	cin >> n >> m;
	vector<vector<int>> adj;
	stack<int> st;
	vector<int> visited;
	adj.resize(n);
	visited.resize(n,0);

	for(int i = 0 ; i <m ; i++) {
		int u, v;
		cin>>u>>v;
		adj[u].push_back(v);
	}
	vector<int> ans = topologicalSort(adj);
	for(int x : ans) {
		cout << x<<" ";
	}
	return 0;

}

