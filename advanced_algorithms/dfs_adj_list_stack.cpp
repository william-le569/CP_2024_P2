// #include <iostream>
// #include <vector>
// #include <stack>

// using namespace std;

// vector<vector<int>> adj;  // Adjacency list
// vector<bool> visited;     // Visited array

// void iterativeDFS(int start) {
//     // kick-start
//     stack<int> st;
//     st.push(start);

//     while (!st.empty()) {
//         int node = st.top();
//         st.pop();

////       mark as visited after popping.
//         if (!visited[node]) {
//             cout << "Visiting node: " << node << endl;
//             visited[node] = true;
//         }

//         // Push all unvisited neighbors onto the stack
//         for (auto it = adj[node].rbegin(); it != adj[node].rend(); ++it) {
//             if (!visited[*it]) {
//                 st.push(*it);
//             }
//         }
//     }
// }

// int main() {
//     int n = 7;  // Number of nodes
//     adj.resize(n);
//     visited.resize(n, false);

//     // Graph edges (0-based indexing)
//     adj[1].push_back(2);
//     adj[1].push_back(3);
//     adj[2].push_back(4);
//     adj[2].push_back(5);
//     adj[3].push_back(6);

//     // Call DFS from node 1
//     iterativeDFS(1);

//     return 0;
// }

/// Ref 2:

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// Global variables (for simplicity)
vector<vector<int>> adj;  // Adjacency list representation
vector<bool> visited;     // Track visited nodes

void dfs(int x) {
    stack<int> s;
    s.push(x);
    
    while (!s.empty()) {
        int current = s.top();
        s.pop();
        
        // Only process if not visited
        // after popping -> mark as visited.
        if (!visited[current]) {
            visited[current] = true;
            cout << current << " ";  // Process node (here just printing)
            
            // Push all unvisited neighbors onto stack
            // Note: We iterate in reverse to match typical DFS order (left-to-right)
            for (int i = adj[current].size() - 1; i >= 0; i--) {
                int u = adj[current][i];
                if (!visited[u]) {
                    s.push(u);
                }
            }
        }
    }
    cout << endl;
}

int main() {
    int n = 7;  // Number of nodes (0 to 6)
    adj.resize(n);
    visited.resize(n, false);

    // Same graph as BFS example
    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(4);
    adj[2].push_back(5);
    adj[3].push_back(6);

    cout << "DFS starting from node 1: ";
    dfs(1);
    return 0;
}


//--- attempt 1

// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>> adj;
// vector<bool> visited;

// void dfs(int x) {
//     // kickstart
//     stack<int> st;
//     st.push(x);

//     while(!st.empty()) {
//         int s = st.top();
//         st.pop();
//         if(!visited[s]) {
//             cout << s << endl;
//             visited[s] = true;
//         }
//         for(auto it = adj[s].rbegin(); it != adj[s].rend(); ++it) {
//             if(!visited[*it]) {
//                 st.push(*it);
//             }
//         }
//     }
// }

// int main() {
//     int n = 7;
//     adj.resize(n);
//     visited.resize(n, false);
//     adj[1].push_back(2);
//     adj[1].push_back(3);
//     adj[2].push_back(4);
//     adj[2].push_back(5);
//     adj[3].push_back(6);

//     adj[2].push_back(1);
//     adj[3].push_back(1);
//     adj[4].push_back(2);
//     adj[5].push_back(2);
//     adj[6].push_back(3);

//     dfs(1);


//     return 0;
// }




// attempt 2: --- mar - 17 -2025

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<bool> visited;

void dfs(int x) {
    stack<int> st;
    // kick start
    st.push(x);
    // visited[x] = true;

    while(!st.empty()) {
        int s = st.top();
        st.pop();
        if(!visited[s]) {
            cout << s << " ";
            visited[s] = true;
        }
        for(auto it = adj[s].rbegin(); it != adj[s].rend(); ++it) {
            // visited[*it] = true;
            if(!visited[*it]) {
                st.push(*it);
            }
        }
    }

}

int main() {
    int n = 7;
    adj.resize(n);
    visited.resize(n, false);
    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(4);
    adj[2].push_back(5);
    adj[3].push_back(6);

    dfs(1);

    return 0;
}



// queue<int> q;
// q.push(start);
// while (!q.empty()) {
//     int node = q.back();
//     q.pop();

//     if (visited[node]) continue;
//     visited[node] = true;
//     cout << node << " ";

//     // Duyệt từ phải sang trái để giữ đúng thứ tự gốc
//     for (auto it = adj[node].begin(); it != adj[node].end(); ++it) {
//         if (!visited[*it]) {
//             q.push(*it);
//         }
//     }
// }