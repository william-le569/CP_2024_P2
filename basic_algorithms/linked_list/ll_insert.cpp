// #include <stdio.h>
// #include <stdlib.h>
// #include <bits/stdc++.h>
// using namespace std;
// struct Node
// {
//     int data;
//     struct Node *next;
// }*first=NULL;

// void create(int A[],int n)
// {
//     int i;
//     struct Node *t,*last;
//     first=(struct Node *)malloc(sizeof(struct Node));
//     first->data=A[0];
//     first->next=NULL;
//     last=first;
//     for(i=1;i<n;i++)
//     {
//         t=(struct Node*)malloc(sizeof(struct Node));
//         t->data=A[i];
//         t->next=NULL;
//         last->next=t;
//         last=t;
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
// void Display(struct Node *p)
// {
//     while(p!=NULL)
//     {
//         printf("%d ",p->data);
//         p=p->next;
//     }
// }
// void Insert(struct Node *p,int index,int x)
// {
//     struct Node *t;
//     int i;
//     if(index < 0 || index > count(p))
//     return;
//     t=(struct Node *)malloc(sizeof(struct Node));
//     t->data=x;
//     if(index == 0)
//     {
//         t->next=first;
//         first=t;
//     }
//     else
//     {
//         for(i=0;i<index-1;i++)
//             p=p->next;
//         t->next=p->next;
//         p->next=t;
//     }
// }
// int main()
// {
//     int A[]={10,20,30,40,50};
//     create(A,5);
//     // int c = count(first);
//     // cout << c << endl;
//     // cout << "Count: " << count(first) << endl;
//     Insert(first,0,5);

//     Insert(first,1,59);
//     Display(first);
//     return 0;
// }

//--------------1

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
} *first = NULL;

void create(int A[], int size) {
    first = new Node;
    first->data = A[0];
    first->next = NULL;

    struct Node *last, *t;

    last = first;

    for(int i = 1; i < size; ++i) {
        t = new Node;
        t->data = A[i];
        t->next = NULL;

        last->next  = t;
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
    int c = 0;
    while(p != NULL) {
        ++c;
        p = p->next;
    }
    return c;
}

void insert(struct Node *p, int index, int value) {
    if(index < 0 || index > count(p)) return;
    
    struct Node *t;
    
    if(index == 0) {
        t = new Node;
        t->data = value;
        t->next = first;
        first = t;    
    }
    else {
        t = new Node;
        t->data = value;
        for(int i = 0; i < index - 1; ++i) p = p -> next;
        t->next = p->next;
        p->next = t;
    }
}

int main() {
    int A[] = {12, 2, 5};
    create(A, 3);
    insert(first, 2, 99);
    display(first);

    return 0;
}

