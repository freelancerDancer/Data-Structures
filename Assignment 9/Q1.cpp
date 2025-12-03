void bfs() {
    queue<int> Q;
    vector<bool> vec;
    q.push(0);
    vis[0] = true;

    while(q.size() > 0) {
        int u = q.front();
        q.pop();
        cout << u << " " ;

        list<int> neighbors = l[u];
            for(int v : neighbors) {
                if(!vis[v]) {
                    vis[v] = true;
                    q.push(v);
                }
            }
    }
}