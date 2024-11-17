#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node * next;
} *first = NULL;

int *p;

int main() {
    cout << "Size of Node: ";
    cout << sizeof(Node) << endl;

    cout << "Size of Int: ";
    cout << sizeof(int) << endl;

    cout << "Size of Pointer: ";
    cout << sizeof(p) << endl;
}