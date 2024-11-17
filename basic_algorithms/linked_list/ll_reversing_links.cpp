#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
} *first = NULL;

void Create(int A[] ,int size) {
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    struct Node *last, *t;
    last = first;

    for(int i = 1; i < size; ++i) {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void Display(struct Node *p) {
    while(p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
}

void ReverseLinks(struct Node *p) {
    struct Node *q, *r;
    q = NULL;
    r = NULL;
    while(p != NULL) {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;
}

int main() {
    int A[] = {1, 2, 3};
    Create(A,3);
    Display(first);
    cout << endl;
    ReverseLinks(first);
    Display(first);
    return 0;
}