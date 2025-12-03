void dfs(int u , vector<bool> &vis) {
    vis[u] = true;
    cout << u << " ";

    list<int> neighbors = l[u];
    for(int v : neighbors) {
        if(!vis[v]) {
            dfs(v,vis);
        }
    }
}