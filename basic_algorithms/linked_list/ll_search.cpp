#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
} *first = NULL;

void create(int A[], int n) {
    first = new Node;
 

    struct Node *last, *t;

    first->data = A[0];
    first->next = NULL;

    last = first;

    for(int i = 1; i < n; ++i) {
        t = new Node;
        t->data = A[i];
        t->next = NULL;

        last->next = t;

        last = t;
    }
}

void display(struct Node* p) {
    while(p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
}

struct Node* search(struct Node* p, int key) {
    while(p != NULL) {
        if(p->data == key) return(p);
        p = p->next;
    }
    return NULL;
}

int main() {
    int A[] = {1, 5, 9};
    int key = 9;
    create(A, 3);
    cout << search(first, key);
    cout << endl;
    cout << search(first, key)->data;
    cout << endl;
    cout << search(first, key)->next;
    cout << endl;
    cout << &search(first, key)->data;
    cout << endl;
    struct Node* p = search(first, key);
    cout << &p << endl;
    cout << &p->data;
}