#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<vector<int>>& adj, vector<int>& visited) {
    visited[node] = 1;
    for (int neigh : adj[node]) {
        if (!visited[neigh]) {
            dfs(neigh, adj, visited);
        }
    }
}

int main() {
    int V, E;
    cin >> V >> E;  // number of vertices and edges

    vector<vector<int>> adj(V);    // adjacency list
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;             // edge between u and v
        adj[u].push_back(v);
        adj[v].push_back(u);       // because graph is undirected
    }

    vector<int> visited(V, 0);
    int components = 0;

    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            components++;
            dfs(i, adj, visited);
        }
    }

    cout << components << endl;
    return 0;
}
