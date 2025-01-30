#include <iostream>
#include <stack>

using namespace std;

class Node {
    public:
        int value;
        Node* left;
        Node* right;
};

void depthFirstSearch(Node* root) {
    stack<Node*> s;
    s.push(root);
    while(!s.empty()) {
        Node* n = s.top();
        s.pop();
        cout << n->value;
        if(n->left != NULL) {
            s.push(n->left);
        }
        if(n->right != NULL) {
            s.push(n->right);
        }
    }
}

int main() {
    Node* root = new Node();
    Node* leftChild = new Node();
    Node* rightChild = new Node();
    Node* leftChildsLeftChild = new Node();
    Node* leftChildsRightChild = new Node();
    Node* rightChildsLeftChild = new Node();
    Node* rightChildsRightChild = new Node();

    root->value = 1;
    leftChild->value = 2;
    rightChild->value = 3;
    leftChildsLeftChild->value = 4;
    leftChildsRightChild->value = 5;
    rightChildsLeftChild->value = 6;
    rightChildsRightChild->value = 7;

    root->left = leftChild;
    root->right = rightChild;
    leftChild->left = leftChildsLeftChild;
    leftChild->right = leftChildsRightChild;
    rightChild->left = rightChildsLeftChild;
    rightChild->right = rightChildsRightChild;

    cout << "    " << root->value;
    cout << "\n   /\\ ";
    cout << "\n  " << root->left->value << "  " << root->right->value;
    cout << "\n /\\  /\\ ";
    cout << "\n" << leftChild->left->value << "  " << leftChild->right->value << " " << rightChild->left->value << "  " << rightChild->right->value;
    cout << "\n\n";
    depthFirstSearch(root);
}