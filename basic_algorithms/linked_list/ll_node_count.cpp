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

void display(struct Node *p) {
    while(p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
}

int count(struct Node *p) {
    int c = 0 ;
    while(p != NULL) {
        ++c;
        p = p->next;
    }
    return c;
}

int Rcount(struct Node *p) {
    if(p == 0) return 0;
    else return Rcount(p->next)+1;
}

int sum(struct Node *p) {
    int s = 0;
    while(p != NULL) {
        s += p->data;
        p = p -> next;
    }
    return s;
}

int main() {
    int A[] = {1, 2, 3};
    create(A, 3);
    cout << Rcount(first) << endl;
    cout << "sum: ";
    cout << sum(first);
    return 0;
}