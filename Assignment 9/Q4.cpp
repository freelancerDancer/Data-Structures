void dijkstra(int src , vector<vector<edges>> graph , int v) {
    priority_queue<pair<int,int>, vector<pair<int,int>> , greater<pair<int,int>> pq;
    vector<int> dist(v, INT_MAX);

    pq.push(0 , src);
    dist[src] = 0;

    while(pq.size() > 0) {
        int u = pq.top().second;
        pq.pop();
        vector<edge> edges = graph[u];
        for(edge e : edges) {
            if(dist[e.v] > dist[e.u] + e.wt) {
                pq.push(dist[e.v] , v);
            }
        }
    }

    for(int d : dist) {
        cout << d << " " <<endl;
    }
}