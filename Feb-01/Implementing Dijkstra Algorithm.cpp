https://practice.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1# 

vector <int> dijkstra(int V, vector<vector<int>> adj[], int S){   
        
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
        vector<int> dis(V, 999999);
        dis[S] = 0;
        pq.push({0, S});
        
        while(!pq.empty()) {
            vector<int> ar(pq.top().begin(), pq.top().end());
            int u = ar[1];
            pq.pop();
            for(auto x : adj[u]) {
                vector<int> a(x.begin(), x.end());
                int v = a[0];
                int w = a[1];
                
                if(dis[v] > dis[u] + w) {
                    dis[v] = dis[u] + w; 
                    pq.push({dis[v], v});
                }
            }
        }
        return dis;
}
