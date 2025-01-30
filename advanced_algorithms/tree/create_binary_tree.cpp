// #include <stdio.h>
// #include <stdlib.h>
// #include "Queue.h"
// struct Node *root=NULL;
// void Treecreate()
// {
//     struct Node *p,*t;
//     int x;
//     struct Queue q;
//     create(&q,4);

//     printf("Eneter root value ");
//     scanf("%d",&x);
//     root=(struct Node *)malloc(sizeof(struct Node));
//     root->data=x;
//     root->lchild=root->rchild=NULL;
//     enqueue(&q,root);

//     while(!isEmpty(q))
//     {
//         p=dequeue(&q);
//         printf("eneter left child of %d ",p->data);
//         scanf("%d",&x);
//         if(x!=-1)
//         {
//             t=(struct Node *)malloc(sizeof(struct
//             Node));
//             t->data=x;
//             t->lchild=t->rchild=NULL;
//             p->lchild=t;
//             enqueue(&q,t);
//         }
//         printf("eneter right child of %d ",p->data);
//         scanf("%d",&x);
//         if(x!=-1)
//         {
//             t=(struct Node *)malloc(sizeof(struct
//             Node));
//             t->data=x;
//             t->lchild=t->rchild=NULL;
//             p->rchild=t;
//             enqueue(&q,t);
//         }
//     }
// }
// void Preorder(struct Node *p)
// {
//  if(p)
//  {
//  printf("%d ",p->data);
//  Preorder(p->lchild);
//  Preorder(p->rchild);
//  }
// }
// void Inorder(struct Node *p)
// {
//  if(p)
//  {
//  Inorder(p->lchild);
//  printf("%d ",p->data);
//  Inorder(p->rchild);
//  }
// }
// void Postorder(struct Node *p)
// {
//  if(p)
//  {
//  Postorder(p->lchild);
//  Postorder(p->rchild);
//  printf("%d ",p->data);
//  }
// }
// int main()
// {
//  Treecreate();
//  Preorder(root);
//  printf("\nPost Order ");
//  Postorder(root);

//  return 0;
// }

//---------- create binary tree -----

// #include <bits/stdc++.h>
// using namespace std;

// struct Node {
//     struct Node *lchild;
//     int data;
//     struct Node *rchild;
// };

// // Create queue for tree
// struct Queue {
//     int front;
//     int rear;
//     int size;
//     struct Node **Q;
// };

// void createQueue(struct Queue *q, int size) {
//     q->rear = q->front = -1;
//     q->size = size;
//     q->Q = new Node*[q->size];
// }

// bool isFull(struct Queue q) {
//     return (q.rear == q.size-1);
// }

// bool isEmpty(struct Queue q) {
//     return (q.rear==q.front);
// }

// void enqueue(struct Queue* q, struct Node *n) {
//     if(isFull(*q)) cout << "Queue is full";
//     else {
//         q->rear++;
//         q->Q[q->rear] = n;
//     }
// }

// Node* dequeue(struct Queue* q) {
//     struct Node *t;
//     if(isEmpty(*q)) cout <<"Queue is empty";
//     else {
//         t = q->Q[q->front+1];
//         q->front++;
//     }
//     return t;
// }

// // struct Node* root = nullptr;

// void createTree(struct Node *&root) {
//     root = new Node;
//     int root_value;
//     cout << "Enter root value :\n";
//     cin >> root_value;
//     root->data = root_value;
//     root->lchild = nullptr;
//     root->rchild = nullptr;

//     struct Node *t;

//     struct Queue q;
//     createQueue(&q, 50);

//     enqueue(&q, root);
//     while(!isEmpty(q)) {
//         struct Node *p;
//         p = dequeue(&q);

//         int left_value = -1;
//         cout << "Enter value of left-child of " << p->data << ": \n" ;
//         cin >> left_value;
//         if(left_value != -1) {
//             p->lchild = new Node;
//             p->lchild->data = left_value;
//             p->lchild->lchild = nullptr;
//             p->lchild->rchild = nullptr;

//             enqueue(&q, p->lchild);
//         }

//         int right_value = -1;
//         cout << "Enter value of right-child of " << p->data << ": \n";
//         cin >> right_value;
//         if(right_value != -1) {
//             p->rchild = new Node;
//             p->rchild->data = right_value;
//             p->rchild->lchild = nullptr;
//             p->rchild->rchild = nullptr;

//             enqueue(&q, p->rchild);
//         }
//     }
// }

// void preorder(struct Node *q) {
//     if(q==nullptr) return; // Base case
//     cout << q->data << " ";
//     preorder(q->lchild);
//     preorder(q->rchild);
// }

// void inorder(struct Node *q) {
//     if(q==nullptr) return; // Base case
//     inorder(q->lchild);
//     cout << q->data << " ";
//     inorder(q->rchild);
// }

// void postorder(struct Node *q) {
//     if(q==nullptr) return; // Base case
//     postorder(q->lchild);
//     postorder(q->rchild);
//     cout << q->data <<" ";
// }

// int main() {
//     struct Node *root;
//     createTree(root);
//     preorder(root);
//     cout << endl;
//     inorder(root);
//     cout << endl;
//     postorder(root);
//     cout << endl;
//     return 0;
// }

// create binary tree - attemp 2

// #include <bits/stdc++.h>
// using namespace std;

// struct Node {
//     struct Node *lchild;
//     int value;
//     struct Node *rchild;
// };

// struct Queue {
//     int size;
//     int front;
//     int rear;

//     struct Node **Q;
// };

// void createQueue(struct Queue *Qu, int size) {
//     Qu->size = size;
//     Qu->front = Qu->rear = -1;
//     Qu->Q = new Node*[Qu->size];
// }

// void enqueue(struct Queue *Qu, struct Node *N) {
//     if(Qu->rear == Qu->size - 1) cout << " Queue is full \n";
//     else {
//         Qu->rear++;
//         Qu->Q[Qu->rear] = N;
//     }
// }

// struct Node *dequeue(struct Queue *Qu) {
//     struct Node *t = new Node;
//     t = NULL;
//     if(Qu->rear == Qu->front) cout << " Queue is empty \n";
//     else {
//         t = Qu->Q[Qu->front+1];
//         Qu->front++;
//     }
//     return t;
// }

// bool isEmpty(struct Queue Qu) {
//     return Qu.front == Qu.rear;
// }

// void  createTree(struct Node *&root) {
//     root = new Node;
//     // root = NULL;
//     struct Queue Qu;
//     createQueue(&Qu, 10);
//     cout << "Enter value of root:\n";
//     cin >> root->value;
//     root->lchild = nullptr;
//     root->rchild = nullptr;
//     enqueue(&Qu, root);

//     while(!(Qu.front == Qu.rear)) {
//         struct Node *t;
//         t = dequeue(&Qu);
//         cout << "Enter value of left child of " << t->value << ": \n";
//         int lchild_value = -1;
//         cin >> lchild_value;
//         if(lchild_value!=-1) {
//             t->lchild = new Node;
//             t->lchild->value = lchild_value;
//             t->lchild->lchild = nullptr;
//             t->lchild->rchild = nullptr;
//             enqueue(&Qu, t->lchild);
//         }
//         cout << "Enter value of right child of " << t->value << ": \n";
//         int rchild_value = -1;
//         cin >> rchild_value;
//         if(rchild_value!=-1) {
//             t->rchild = new Node;
//             t->rchild->value = rchild_value;
//             t->rchild->lchild = nullptr;
//             t->rchild->rchild = nullptr;
//             enqueue(&Qu, t->rchild);
//         }
//     }
// }

// void preorder(struct Node *N) {
//     if(N==nullptr) return;
//     cout <<  N->value << " ";
//     preorder(N->lchild);
//     preorder(N->rchild);
// }


// int main() {
//     struct Node *root;
//     root = NULL;
//     createTree(root);
//     preorder(root);
//     return 0;
// }

// create binary tree 3
#include <bits/stdc++.h>
using namespace std;

struct Node {
    struct Node* lchild;
    int value;
    struct Node* rchild;
};

struct Queue {
    int size, front, rear;
    struct Node **Q;
};

void createQueue(struct Queue *q, int size) {
    q->size = size;
    q->front = q->rear = -1;
    q->Q = new Node*[q->size];
}

void enqueue(struct Queue *q, struct Node *n) {
    if(q->rear == q->size-1) cout << "Queue is full \n";
    else {
        q->rear++;
        q->Q[q->rear] = n;
    }
}

struct Node *dequeue(struct Queue *q) {
    struct Node *t = new Node;
    //  struct Node *t;
    if(q->rear == q->front) cout << "Queue is empty \n";
    else {
        t = q->Q[q->front+1];
        q->front++;
    }
    return t;
}

void createTree(struct Node *&root) {
    struct Queue q;
    createQueue(&q, 20);

    // root = new Node;
    // root = nullptr;
    
    cout << "Enter root-value :\n";
    cin >> root->value;
    root->lchild = nullptr;
    root->rchild = nullptr;

    enqueue(&q, root);

    while(!(q.front == q.rear)) {
        struct Node *t = new Node;
        t = nullptr;
        // struct Node *t;
        t = dequeue(&q);

        int lchild_value = -1;
        cout << "Enter lelf-child of " << t->value << ": \n";
        cin >> lchild_value;
        if(lchild_value != -1) {
            t->lchild = new Node;
            t->lchild->value = lchild_value;
            t->lchild->lchild = nullptr;
            t->lchild->rchild = nullptr;
            enqueue(&q, t->lchild);
        }

        int rchild_value = -1;
        cout << "Enter right-child of " << t->value << ": \n";
        cin >> rchild_value;
        // cin >> rchild_value;
        if(rchild_value != -1) {
            t->rchild = new Node;
            t->rchild->value = rchild_value;
            t->rchild->lchild = nullptr;
            t->rchild->rchild = nullptr;
            enqueue(&q, t->rchild);
        }

    }
}

void preorder(struct Node *q) {
    if(q==nullptr) return;
    cout << q->value << " ";
    preorder(q->lchild);
    preorder(q->rchild);
}



int main() {
    struct Node *root = new Node;
    // root = nullptr;
    // createTree(root);
    // preorder(root);
    cout << sizeof(Node) << endl;
    cout << sizeof(int);
    return 0;
}