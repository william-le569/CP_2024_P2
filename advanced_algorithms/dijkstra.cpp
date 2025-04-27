#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll INF = 1e18; // Giá trị vô cực lớn hơn để tránh tràn số

void dijkstra(int start, vector<vector<pair<int, int>>>& adj, vector<ll>& dist) {
    int n = adj.size();
    dist.assign(n, INF); // Khởi tạo khoảng cách
    vector<bool> visited(n, false);
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq; // {khoảng cách, đỉnh}

    dist[start] = 0;
    pq.push({0, start});

    while (!pq.empty()) {
        int u = pq.top().second; // Lấy đỉnh có khoảng cách nhỏ nhất
        pq.pop();

        if (visited[u]) continue; // Đã xử lý thì bỏ qua
        visited[u] = true;

        // Duyệt các đỉnh kề
        for (const pair<int, int>& edge : adj[u]) { // Không dùng structured binding để tương thích với C++11
            int v = edge.first;
            int w = edge.second;
            
            if (!visited[v] && dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
}

int main() {
    int n = 4; // Số đỉnh
    vector<vector<pair<int, int>>> adj(n); // Danh sách kề: {đỉnh, trọng số}

    // Thêm cạnh vào đồ thị
    adj[0].push_back({1, 4});
    adj[0].push_back({2, 8});
    adj[1].push_back({3, 2});
    adj[3].push_back({2, 3});

    vector<ll> dist;
    dijkstra(0, adj, dist); // Tìm từ đỉnh 0

    for (int i = 0; i < n; i++) {
        cout << "Khoang cach tu 0 den " << i << ": " << (dist[i] == INF ? -1 : dist[i]) << endl;
    }
    return 0;
}