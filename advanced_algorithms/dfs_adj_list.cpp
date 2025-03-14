// #include <iostream>
// #include <vector>

// using namespace std;

// vector<vector<int>> adj;  // Adjacency list
// vector<bool> visited;     // Visited array

// void dfs(int s) {
//     if (visited[s]) return;  // Base case: If already visited, return
//     visited[s] = true;       // Mark current node as visited
//     cout << "Visiting node: " << s << endl;  // Print for debugging
    
//     for (int u : adj[s]) {  // Loop through neighbors
//         dfs(u);
//     }
// }

// int main() {
//     int n = 7;  // Number of nodes
//     adj.resize(n);
//     visited.resize(n, false);

//     // Sample edges (undirected graph)
//     // (1) ---> (2) ---> (4)
//     //  |        |
//     //  V        V
//     // (3)      (5)
//     //  |
//     //  V
//     // (6)
//     adj[1].push_back(2);
//     adj[1].push_back(3);
//     adj[2].push_back(4);
//     adj[2].push_back(5);
//     adj[3].push_back(6);

//     // Call DFS from node 1
//     dfs(1);

//     return 0;
// }


//---------- attempt 1 --------------

// #include <bits/stdc++.h>
// using namespace std;

// // Create adjacency list to store the graph

// vector<vector<int>> adj;
// vector<bool> visited;

// void dfs(int x) {
//     if(visited[x]) return;
//     visited[x] = true;
//     cout << x << " ";
//     for(int u : adj[x]) {
//         dfs(u);
//     }
// }

// void printAdjList(const vector<vector<int>>& adj) {
//     for (size_t i = 0; i < adj.size(); i++) {
//         cout << "Node " << i << ": ";
//         for (int neighbor : adj[i]) {
//             cout << neighbor << " ";
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int n = 4;
    
//     adj.resize(n+1);
//     visited.resize(n+1, false);

//     // adj[1].push_back(2);
//     // adj[2].push_back(4);
//     // adj[2].push_back(5);
//     // adj[1].push_back(3);
//     // adj[3].push_back(6);

//     adj[1].push_back(2);
//     adj[2].push_back(3);
//     adj[2].push_back(4);
//     adj[3].push_back(4);
//     adj[4].push_back(1);

//     // (1) -> (2) -> (3)
//     // ^      |      /
//     //  \     |     /
//     //   \    V    V
//     //     (   4   )

//     // printAdjList(adj);

//     dfs(1);

//     return 0;
// }

//----------------- attempt 2

// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>> adj;
// vector<bool> visited;

// void dfs(int x) {
//     if(visited[x]) return;
//     visited[x] = true;
//     cout << x << " ";
//     for(int u : adj[x]) {
//         dfs(u);
//     }
// }

// int main() {
//     int n = 6;
//     visited.resize(n+1, false);
//     adj.resize(n+1);

//     adj[1].push_back(2);
//     adj[2].push_back(4);
//     adj[2].push_back(5);
//     adj[1].push_back(3);
//     adj[3].push_back(6);

//     dfs(1);

//     return 0;
// 

//----------------- attempt 3

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<int> visited;

void dfs(int x) {
    if(visited[x]) return;
    visited[x] = true;
    cout << x << " ";
    for(int u : adj[x]) {
        dfs(u);
    }
}

int main()  {
    int n = 6;
    adj.resize(n+1);
    visited.resize(n+1, false);

    adj[1].push_back(2);
    adj[1].push_back(3);

    adj[2].push_back(4);
    adj[2].push_back(5);

    adj[3].push_back(6);

    dfs(1);

    return 0;
}