#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
} *first = NULL, *second = NULL, *third = NULL;

void Create(struct Node **head, int A[], int size) {
    (*head) = new Node;
    (*head)->data = A[0];
    (*head)->next = NULL;

    struct Node *last, *t;
    last = (*head);

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
        p = p-> next;
    }
}
// [1] [3] [5]
// [2] [4] [6]

void Merging(struct Node *first, struct Node *second) {
    // struct Node *third, *last;
    // third = NULL;
    struct Node *last;
    if(first->data < second->data) {
        third = first;
        last = first;
        first = first->next;
        last->next = NULL;
    }
    else {
        third = second;
        last = second;
        second = second->next;
        last->next = NULL;
    }
    while(first != NULL && second != NULL) {
        if(first->data < second->data) {

            last->next = first;
            last = first;
            first = first->next;
            last->next = NULL;

        } else {
            last->next = second;
            last = second;
            second = second->next;
            last->next = NULL;
            
        }
    }
    if(first != NULL) last->next = first;
    else last->next = second;
}

int main() {
    int A[] = {1,3,5};
    int B[] = {2,4,6};
    Create(&first, A, 3);
    Create(&second, B, 3);
    Merging(first,second);
    Display(third);
    return 0;
}