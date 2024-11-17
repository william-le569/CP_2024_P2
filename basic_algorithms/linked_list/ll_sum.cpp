#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
} *first = NULL;

void create(int A[], int n) {
    first = new Node;
    first->data = A[0];
    first->next = NULL;

    struct Node *last, *t;
    last = first;

    for(int i = 1; i < n; ++i) {
        t = new Node;
        t->data = A[i];
        t->next = NULL;

        last->next = t;
        last = t;
    }
}

int sum(struct Node *p) {
    int s = 0;
    while(p != NULL) {
        s += p->data;
        p = p->next;
    }
    return s;
}

int main() {
    vector<int> A;
    A.push_back(3);
    create(A.data(), A.size());
    cout << sum(first);
}