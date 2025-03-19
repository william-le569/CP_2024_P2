// #include <iostream>
// #include <vector>
// #include <queue>

// using namespace std;

// vector<vector<int>> adj;   // Adjacency list
// vector<bool> visited;      // Visited array
// vector<int> dist;      // dist from the starting node

// void bfs(int x) {
//     queue<int> q;
//     visited[x] = true;
//     dist[x] = 0;
//     q.push(x);

//     while (!q.empty()) { // Flow control, Scheduler or Engine
//         int s = q.front(); 
//         q.pop();

//         cout << "Visiting node: " << s << " | dist: " << dist[s] << endl;

//         for (auto u : adj[s]) {
//             if (visited[u]) continue; // if neighbor is not visited -> execute
//             visited[u] = true;
//             dist[u] = dist[s] + 1;
//             q.push(u);
//         }
//     }
// }

// int main() {
//     int n = 7;  // Number of nodes
//     adj.resize(n);
//     visited.resize(n, false);
//     dist.resize(n, -1);  // -1 means unvisited

//     // Sample undirected graph:
//     // 1 -- 2 -- 4
//     // |    |
//     // 3    5
//     // |
//     // 6
//     adj[1].push_back(2);
//     adj[1].push_back(3);
//     adj[2].push_back(4);
//     adj[2].push_back(5);
//     adj[3].push_back(6);

//     // If the graph is undirected, add reverse edges too
//     adj[2].push_back(1);
//     adj[3].push_back(1);
//     adj[4].push_back(2);
//     adj[5].push_back(2);
//     adj[6].push_back(3);

//     // Run BFS from node 1
//     cout << "BFS starting from node 1:\n";
//     bfs(1);

//     return 0;
// }

//---------------------attempt1--------
// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>> adj;
// vector<bool> visited;
// vector<int> dist;

// void bfs(int x) {
//     queue<int> q;
//     // implement for starting node
//     // + mark -> calc distance -> push into queue
//     // set the first state for queue
//     visited[x] = true;
//     dist[x] = 0;
//     q.push(x);

//     while(!q.empty()) {
//         // push element in queue out & then check it.
//         int s = q.front();
//         cout << s << " " << dist[s] << endl;
//         q.pop();
//         for(auto u : adj[s]) {
//             if(visited[u]) continue;
//             visited[u] = true;
//             q.push(u);
//             dist[u] = dist[s] + 1;
//         }
//     }
// }


// int main() {
//     int n = 7;
//     visited.resize(n, false);
//     adj.resize(n);
//     dist.resize(n, -1);

//     adj[1].push_back(3);
//     adj[1].push_back(2);
//    //adj[1].push_back(3);
//     adj[2].push_back(4);
//     adj[2].push_back(5);
//     adj[3].push_back(6);

//     adj[3].push_back(1);
//     adj[2].push_back(1);
//     adj[4].push_back(2);
//     adj[5].push_back(2);
//     adj[6].push_back(3);
//     bfs(1);
//     return 0;
// }

//---------- attempt 2 -------------
// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>> adj;
// vector<int> dist;
// vector<bool> visited;

// void bfs(int x) {
//     // process starting node
//     queue<int> q;
//     q.push(x);
//     visited[x] = true;
//     dist[x] = 0;

//     while(!q.empty()) {
//         int s = q.front();
//         q.pop();
//         cout << s << " " << dist[s] << endl;
//         for(auto u : adj[s]) {
//             if(visited[u]) continue;
//             visited[u] = true;
//             dist[u] = dist[s] + 1;
//             q.push(u);
//         }
//     }
// }

// int main() {
//     int n = 7;
//     adj.resize(n);
//     dist.resize(n, -1);
//     visited.resize(n, false);
//     adj[1].push_back(2);
//     adj[1].push_back(3);
//     adj[2].push_back(4);
//     adj[2].push_back(5);
//     adj[3].push_back(6);

//     bfs(1);
//     return 0;
// }

//----- attempt 3 -------
// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>> adj;
// vector<int> dist;
// vector<bool> visited;

// void bfs(int x) {
//     queue<int> q;
//     q.push(x);
//     visited[x] = true;
//     dist[x] = 0;
//     while(!q.empty()) {
//         int s = q.front();
//         q.pop();
//         cout << s << " " << dist[s] << endl;
//         for(auto u : adj[s]) {
//             if(visited[u]) continue;
//             visited[u] = true;
//             dist[u] = dist[s] + 1;
//             q.push(u);
//         }
//     }
// }

// int main() {
//     int n = 7;
//     adj.resize(n);
//     visited.resize(n, false);
//     dist.resize(n, -1);

//     adj[1].push_back(2);
//     adj[1].push_back(3);
//     adj[2].push_back(4);
//     adj[2].push_back(5);
//     adj[3].push_back(6);

//     bfs(1);
    
//     return 0;
// }

//---------- attempt 4

////--------- **************************------------------

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<int> dist;
vector<bool> visited;

// mark as visited with first encounter.
void bfs(int x) {
    queue<int> q;
    q.push(x);
    visited[x] = true;
    dist[x] = 0;
    while(!q.empty()) {
        int s = q.front();
        q.pop();
        cout << s << " " << dist[s] << endl;
        for(auto u : adj[s]) {
            if(visited[u]) continue;
            visited[u] = true;
            dist[u] = dist[s] + 1;
            q.push(u);
        }
    }
}

int main() {
    int n = 7;
    adj.resize(n);
    visited.resize(n, false);
    dist.resize(n, -1);

    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(4);
    adj[2].push_back(5);
    adj[3].push_back(6);

    bfs(1);
    return 0;
}

///---------------------***************----------------


// #include <iostream>
// #include <vector>
// #include <queue>

// using namespace std;

// vector<vector<int>> adj;   // Adjacency list
// vector<bool> visited;      // Visited array
// vector<int> dist;      // dist from the start node
// queue<int> q;              // BFS queue

// void bfs(int x) {
//     visited[x] = true;
//     dist[x] = 0;
//     q.push(x);

//     while (!q.empty()) {
//         int s = q.front();
//         q.pop();
//         cout << "Visiting node: " << s << ", dist from start: " << dist[s] << endl;

//         for (auto u : adj[s]) {
//             if (visited[u]) continue;
//             visited[u] = true;
//             dist[u] = dist[s] + 1;
//             q.push(u);
//         }
//     }
// }

// int main() {
//     int n, m; // Number of nodes and edges
//     cout << "Enter number of nodes and edges: ";
//     cin >> n >> m;

//     adj.resize(n + 1);  // Assuming 1-based index
//     visited.resize(n + 1, false);
//     dist.resize(n + 1, -1);  // -1 means unreachable

//     // cout << "Enter edges (u v):" << endl;
//     // for (int i = 0; i < m; i++) {
//     //     int u, v;
//     //     cin >> u >> v;
//     //     adj[u].push_back(v);
//     //     adj[v].push_back(u);  // Undirected graph
//     // }



//     int start;
//     cout << "Enter start node: ";
//     cin >> start;

//     bfs(start);

//     return 0;
// }


//--------- attempt Mar-17-25

// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>> adj;
// vector<int> dist;
// vector<bool> visited;

// void bfs(int x) {
//     queue<int> q;
//     q.push(x);
//     dist[x] = 0;
//     // visited[x] = true;

//     while(!q.empty()) {
//         int s = q.front();
//         q.pop();
//         // if(!visited[x]) {
//         //     cout << s << " " << dist[x] << endl;
//         //     visited[x] = true;
//         // }
//         cout << s << " " << dist[s] << endl;
//         for(auto u : adj[s]) {
//             if(visited[u]) continue;
//             visited[u] = true;
//             dist[u] = dist[s] + 1;
//             q.push(u);
            
//         }
//     }
// }


// int main() {
//     int n = 7;
//     adj.resize(n);
//     dist.resize(n, -1);
//     visited.resize(n, false);

//     adj[1].push_back(2);
//     adj[1].push_back(3);
//     adj[2].push_back(4);
//     adj[2].push_back(5);
//     adj[3].push_back(6);

//     bfs(1);

//     return 0;
// }