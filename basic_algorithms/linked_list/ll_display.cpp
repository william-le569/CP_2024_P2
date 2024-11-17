// #include <bits/stdc++.h>
// using namespace std;

// struct Node {
//     int data;
//     struct Node *next;
// } *first = NULL;

// void create(int A[], int n) {
//     int i;
//     struct Node *t, *last;
//     first = new Node;
//     first->data = A[0];
//     first->next = NULL;

//     last = first;

//     for(int i = 1; i < n; ++i) {
//         t = new Node;
//         t->data = A[i];
//         t->next = NULL;
//         last->next = t;
//         last = t;
//     }
// }

// void Display(struct Node *p) {
//     while(p!= NULL) {
//         cout << p->data <<" ";
//         p = p->next;
//     }
// }

// int main() {
//     int A[] = {3, 5, 7, 10, 15};
//     create(A, 5);
//     Display(first);
//     return 0;
// }


//------------- Meine Code -----------
// 1


// #include <bits/stdc++.h>
// using namespace std;

// struct Node {
//     int data;
//     struct Node *next;
// } *first = NULL;

// void create(int A[], int n) {
//     struct Node *last, *t;
    
//     first = new Node;
    
//     first->data = A[0];
//     first->next = NULL;
//     last = first;

//     for(int i = 1; i < n; ++i) {
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

// int main() {
//     int A[] = {3, 5, 7};
//     create(A,3);
//     display(first);
//     return 0;
// }

//-------------------------------

// #include <bits/stdc++.h>
// using namespace std;

// struct Node {
//     int data;
//     struct Node *next;
// } *first = NULL;

// void create(int A[], int n) {
//     first = new Node;
//     struct Node *last, *t;
    
//     first->data = A[0];
//     first->next = NULL;
//     last = first;

//     for(int i = 1; i < n; ++i) {
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


// int main() {
//     int A[] = {2, 4, 6};
//     create(A, 3);
//     display(first);

//     return 0;
// }

//------------------------3

// #include <bits/stdc++.h>
// using namespace std;

// struct Node {
//     int data;
//     struct Node *next;
// } *first = NULL;

// void create(int A[], int n) {
//     first = new Node;
//     struct Node *last, *t;

//     first->data = A[0];
//     first->next = NULL;

//     last = first;

//     for(int i = 1; i < n; ++i) {
//         t = new Node;
//         t->data = A[i];
//         t->next = NULL;
//         last->next = t;

//         last = t;
//     }

// }

// void display(struct Node *p) {
//     while(p != NULL) {
//         cout << p-> data << " ";
//         p = p->next;
//     }
// }

// int main() {
//     int A[] = {1, 2, 3};
//     create(A, 3);
//     display(first);
//     return 0;
// }

//----4

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
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

void display(struct Node *p) {
    while(p!=NULL) {
        cout << p->data << " ";
        p = p->next;
    }
}

void Rdisplay(struct Node *p) {
    if(p != NULL) {
        Rdisplay(p->next);
        cout << p->data << " ";
    }
}

int main() {
    int A[] = {234,12,1};
    create(A,3);
    display(first);
    cout << endl;
    Rdisplay(first);
    return 0;
}