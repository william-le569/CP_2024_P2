#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<vector<int>> adj;  // Adjacency list
vector<bool> visited;     // Visited array

void iterativeDFS(int start) {
    stack<int> st;
    st.push(start);

    while (!st.empty()) {
        int node = st.top();
        st.pop();

        if (!visited[node]) {
            cout << "Visiting node: " << node << endl;
            visited[node] = true;
        }

        // Push all unvisited neighbors onto the stack
        for (auto it = adj[node].rbegin(); it != adj[node].rend(); ++it) {
            if (!visited[*it]) {
                st.push(*it);
            }
        }
    }
}

int main() {
    int n = 7;  // Number of nodes
    adj.resize(n);
    visited.resize(n, false);

    // Graph edges (0-based indexing)
    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(4);
    adj[2].push_back(5);
    adj[3].push_back(6);

    // Call DFS from node 1
    iterativeDFS(1);

    return 0;
}