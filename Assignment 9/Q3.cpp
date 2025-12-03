void primsalgo(int src) {
    priority_queue<
        pair<int,int>,
        vector<pair<int,int>>,
        greater<pair<int,int>>
    > pq;   // (weight, node) -> min heap

    vector<bool> mst(V, false);

    pq.push(make_pair(0, src));
    int ans = 0;

    while (!pq.empty()) {
        int u = pq.top().second;
        int wt = pq.top().first;
        pq.pop();

        if (!mst[u]) {
            mst[u] = true;
            ans += wt;

            list<pair<int,int>> neighbors = graph[u];

            for (pair<int,int> n : neighbors) {
                int v = n.first;
                int currWt = n.second;

                if (!mst[v]) {   // IMPORTANT OPTIMIZATION
                    pq.push(make_pair(currWt, v));
                }
            }
        }
    }

    cout << "Final cost of MST : " << ans << endl;
}


//kruskal's algorithm

class Edge {
    public:
        int u;
        int v;
        int wt;

        Edge(int u , int v, int wt) {
            this->u = u;
            this->v = v;
            this->wt = wt;
        }
};

class Graph {
    public:
        vector<edge> edges;
        int V;
        vector<int>par;
        vector<int>rank;

        graph(int V) {
            this->V = V;

            for(int i=0 ; i<V ; i++) {
                par.push_back(i);
                rank.push_back(0);
            }
        }

        int find(int x) {
            if(par[x] == x)  {
                return x;
            }
            return par[x] = find(par[x]);
        }

        void unionbyRank(int u , int v) {
            int parU = find(u);
            int parV = find(v);

            if(rank[parU] == rank[parV]) {
                par[parV] = parU;
                rank[parU]++;
            } else if (rank[parU] > rank[parV]) {
                par[parV] = parU;
            }else {
                par[parU] = parV;
            }
        }

        void addedge(int u, int v , int wt) {
            edges.push_back(edge(u,v,wt));
        }

        void kruskals() {
            sort(edges.begin() , edges.end() , [](edge &a, edge &b){return a.wt < b.bt});
            //O(ElogE)
            int mincost = 0;
            int count = 0;

            for(int i=0 ; i<edges.size() && count < V-1 ; i++) {
                Edge e = edges[i];

                int parU = find[e.u];
                int parV = find[e.v];
                if(parU != parV) {
                    unionbyrank(parU , parV);
                    mincost += e.wt;
                    count++;                }
            }
            cout << "Mincost : " << mincost << endl;
        }
}