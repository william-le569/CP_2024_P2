#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// BFS function to traverse the graph
void BFS(int startNode, const vector<vector<int>>& graph) {
    int n = graph.size(); // Number of nodes
    vector<bool> visited(n, false); // Visited array to keep track of visited nodes
    queue<int> q; // Queue to process nodes in BFS

    // Start BFS from the given startNode
    visited[startNode] = true;
    q.push(startNode);

    while (!q.empty()) {
        int currentNode = q.front(); // Get the node at the front of the queue
        q.pop(); // Remove it from the queue

        // Process the current node (for example, print it)
        cout << currentNode << " ";

        // Visit all the neighbors of the current node
        for (int neighbor : graph[currentNode]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor); // Add the neighbor to the queue
            }
        }
    }
}

int main() {
    // Number of nodes in the graph (assuming nodes are 0 to n-1)
    int n = 5;

    // Adjacency list representation of the graph
    vector<vector<int>> graph(n);

    // Add edges (undirected graph example)
    graph[0] = {1, 2};
    graph[1] = {0, 3, 4};
    graph[2] = {0};
    graph[3] = {1};
    graph[4] = {1};

    // Start BFS traversal from node 0
    cout << "BFS traversal starting from node 0: ";
    BFS(0, graph);
    cout << endl;

    return 0;
}