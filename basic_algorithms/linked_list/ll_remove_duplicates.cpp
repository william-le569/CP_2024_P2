// #include <bits/stdc++.h>
// using namespace std;

// struct Node {
//     int data;
//     struct Node *next;
// } *first = NULL;

// void Create(int A[], int size) {
//     first = new Node;
//     first->data = A[0];
//     first->next = NULL;

//     struct Node *last, *t;

//     last = first;

//     for(int i = 1; i < size-1; ++i) {
//         t = new Node;
//         t->data = A[i];
//         t->next = NULL;

//         last->next = t;
//         last = t;
//     }
// }

// void Display(struct Node *p) {
//     while(p != NULL) {
//         cout << p->data << " ";
//         p = p->next;
//     }
// }

// void RemoveDuplicates(struct Node *p) {
//     struct Node *q = p->next;
//     while(q != NULL) {
//         if(p->data != q->data) {
//             p = q;
//             q = q->next;
//         }
//         else {
//             p->next = q->next;
//             delete q;
//             q = p->next;
//         }
//     }
// }

// int main() {
//     int A[] = {1,1,2,2,2,3,3,3};
//     Create(A,sizeof(A)/sizeof(int));
//     Display(first);
//     cout << endl;
//     RemoveDuplicates(first);
//     Display(first);
//     return 0;
// }

//---------------2

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

void RemoveDuplicates(struct Node *p) {
    struct Node *q;
    q = p->next;

    while(q != NULL) {
        if(q->data != p->data) {
            p = q;
            q = q->next;
        }
        else {
            p->next = q->next;
            delete q;
            q = p->next;
        }
    }
}

int main() {
    int A[] = {3,3,3,3,4,4,4};
    Create(A, sizeof(A)/sizeof(int));
    Display(first);
    cout << endl;
    RemoveDuplicates(first);
    Display(first);
    return 0;
}