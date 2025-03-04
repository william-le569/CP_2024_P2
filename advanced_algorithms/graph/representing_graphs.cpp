#include <bits/stdc++.h>
using namespace std;

int main() {
    // adjacency list representation
    // (1) -> (2) -> (3)
    //  ^      |      /
    //   \     |     /
    //    \    V    V
    //     (   4   )
    const int N = 4;
    vector<int> adj[N];
    adj[1].push_back(2); // Cach nho: ben canh 1 co 2, 
                         // ben canh 2 co 1 khong? -> khong -> 2 o xa vo cung de di den 1.
    adj[2].push_back(3);
    adj[2].push_back(4);
    adj[3].push_back(4);
    adj[4].push_back(1);
    // adjacency list representation - with weighted.
    // (1) -[5]-> (2) -[7]-> (3)
    // ^         |           /
    // [2]      [6]         /[5]
    //   \       V         V
    //     (      4         )
    vector<pair<int, int>> adj_w[N];
    adj_w[1].push_back({2, 5});
    adj_w[2].push_back({3, 7});
    adj_w[2].push_back({4, 6});
    adj_w[3].push_back({4, 5});
    adj_w[4].push_back({1, 2});

    // represent graph with adjacency matrix
     // (1) -> (2) -> (3)
    //  ^      |      /
    //   \     |     /
    //    \    V    V
    //     (   4   )
    int adj_m[N][N] = {0};
    adj_m[1][2] = 1;
    adj_m[2][3] = 1;
    adj_m[2][4] = 1;
    adj_m[3][4] = 1;
    adj_m[4][1] = 1;

    // represent weighted graph with adjacency matrix
    // (1) -[5]-> (2) -[7]-> (3)
    // ^         |           /
    // [2]      [6]         /[5]
    //   \       V         V
    //     (      4         )
    int adj_m_w[N][N] = {0};
    adj_m_w[1][2] = 5;
    adj_m_w[2][3] = 7;
    adj_m_w[2][4] = 6;
    adj_m_w[3][4] = 5;
    adj_m_w[4][1] = 2;

    // edge list representation
    vector<pair<int, int>> edges;
    edges.push_back({1, 2});
    edges.push_back({2, 3});
    edges.push_back({2, 4});
    edges.push_back({3, 4});
    edges.push_back({4, 1});

    // weighted - edge list representation
    vector<tuple<int, int, int>> edges_w;
    // edges_w.push_back({1, 'a', 5});
    edges_w.push_back(make_tuple(1, 2, 5));
    edges_w.push_back(make_tuple(2, 3, 7));
    edges_w.push_back(make_tuple(2, 4, 6));
    edges_w.push_back(make_tuple(3, 4, 5));
    edges_w.push_back(make_tuple(4, 1, 2));

    return 0;
}