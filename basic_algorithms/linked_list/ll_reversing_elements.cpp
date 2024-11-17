#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
} *first = NULL;

void Create(int A[], int size) {
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

int count(struct Node *p) {
    int c = 0;
    while(p != NULL) {
        ++c;
        p = p -> next;
    }
    return 0;
}


void ReverseElements(struct Node *p) {
    int i = 0;
    int A[count(p)];
    while(p != NULL) {
        A[i] = p->data;
        p = p->next;
        ++i;
    }
    p = first;
    --i;
    while(p != NULL) {
        p->data = A[i--];
        p = p->next;
    }
}

int main() {
    int A[] = {1, 2, 3};
    Create(A,3);
    Display(first);
    cout << endl;
    ReverseElements(first);
    Display(first);
    cout << first->next->next->data << endl;
}