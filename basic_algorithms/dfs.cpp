#include <iostream>
#include <vector>

using namespace std;

// DFS function to recursively traverse the graph
void DFS(int currentNode, const vector<vector<int>>& graph, vector<bool>& visited) {
    // Mark the current node as visited
    visited[currentNode] = true;

    // Process the current node (for example, print it)
    cout << currentNode << " ";

    // Visit all the neighbors of the current node
    for (int neighbor : graph[currentNode]) {
        if (!visited[neighbor]) {
            DFS(neighbor, graph, visited); // Recursively visit the neighbor
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

    // Visited array to keep track of visited nodes
    vector<bool> visited(n, false);

    // Start DFS traversal from node 0
    cout << "DFS traversal starting from node 0: ";
    DFS(0, graph, visited);
    cout << endl;

    return 0;
}