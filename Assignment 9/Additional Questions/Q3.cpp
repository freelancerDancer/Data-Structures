#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

int main() {
    int V, E;
    cin >> V >> E;

    // adjacency list: adj[u] = list of (v, w)
    vector<vector<pair<int,int>>> adj(V + 1);

    for (int i = 0; i < E; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
    }

    int K;
    cin >> K; // starting node

    // Dijkstra
    const int INF = INT_MAX;
    vector<int> dist(V + 1, INF);

    // min-heap: (distance, node)
    priority_queue<
        pair<int,int>,
        vector<pair<int,int>>,
        greater<pair<int,int>>
    > pq;

    dist[K] = 0;
    pq.push({0, K});

    while (!pq.empty()) {
        int d = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if (d > dist[u]) continue; // stale pair

        for (auto edge : adj[u]) {
            int v = edge.first;
            int w = edge.second;

            if (dist[u] != INF && dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }

    // find how long it takes for ALL nodes to receive the signal
    int answer = 0;
    for (int i = 1; i <= V; i++) {
        if (dist[i] == INF) {
            cout << -1; // some node is unreachable
            return 0;
        }
        if (dist[i] > answer) answer = dist[i];
    }

    cout << answer;
    return 0;
}
