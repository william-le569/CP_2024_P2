// #include <bits/stdc++.h>
// using namespace std;

// struct Node {
//     int data;
//     struct Node *next;
// } *first = NULL;

// void create(int A[], int size) {
//     first = new Node;
//     first->data = A[0];
//     first->next = NULL;
//     struct Node *last, *t;

//     last = first;

//     for(int i = 1; i < size; ++i) {
//         t = new Node;
//         t->data = A[i];
//         t->next = NULL;
//         last->next = t;
//         last = t;
//     }
// }

// void display(struct Node *p) {
//     while(p != NULL) {
//         cout << p->data << " ";
//         p = p->next;
//     }
// }

// int count(struct Node *p) {
//     int c = 0;
//     while(p != NULL) {
//         ++c;
//         p = p->next;
//     }
//     return c;
// }

// int Delete(struct Node *p, int pos) {
//     struct Node *q = NULL;
//     int x = -1;

//     if(pos < 1 || pos > count(p)) return -1;

//     if(pos == 0) {
//         q = first;
//         x = first->data;
//         first = first->next;
//         delete q;
//         return x;
//     }
//     else {
//         q = NULL;
//         for(int i = 0; i < pos - 1; ++i) {
//             q = p;
//             p = p->next;
//         }
//         q->next = p->next;
//         x = p->data;
//         delete p;
//         return x;
//     }
// }

// int main() {   
//     int A[] = {1, 2, 5};
//     create(A,3);
//     display(first);
//     cout << endl;
//     cout << Delete(first, 2);
//     cout << endl;
//     display(first);
// }

//---- 10/19/24 - 1

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
//     for(int i = 1; i < size; ++i) {
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

// int count(struct Node *p) {
//     int c = 0;
//     while(p != NULL) {
//         ++c;
//         p = p->next;
//     }
//     return c;
// }

// int Delete(struct Node *p, int index) {
//     struct Node *q = NULL;
//     int x = -1;
//     if(index < 1 || index > count(p)) return -1;
//     if(index == 1) {
//         q = first;
//         first = first->next;
//         x = q->data;
//         delete q;
//         return x;
//     } else {
//         for(int i = 0; i < index - 1; ++i) {
//             q = p;
//             p = p->next;
//         }
//         q->next = p->next;
//         // q = p->next;
//         x = p->data;
//         delete p;
//         return x;
//     }
// }

// int main() {
//     int A[] = {1 , 5, 9};
//     Create(A, 3);
//     Display(first);
//     cout << endl;
//     cout << Delete(first, 3) << endl;
//     Display(first);
// }

//-----2

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
        p = p->next;
    }
    return c;
}

int Delete(struct Node *p, int index) {
    struct Node *q;
    int x = -1;
    if(index < 1 || index > count(p)) return -1;
    if(index == 1) {
        q = first;
        first = first->next;
        x = q->data;
        delete q;
        return x;
    } else {
        q = NULL;
        for(int i = 0; i < index - 1; ++i) {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        delete p;
        return x;
    }
}

int main() {
    int A[] = {123, 234, 324};
    Create(A, 3);
    Display(first);
    cout << endl;
    cout << Delete(first, 2) << endl;
    Display(first);
}