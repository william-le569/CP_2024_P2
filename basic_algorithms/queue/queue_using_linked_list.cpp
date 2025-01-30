#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;
} *front = NULL, *rear = NULL;



void enqueue(int x) {
    Node *t = new Node;
    if(t==NULL)
        cout << "Queue is FULL";
    else {
        t->data = x;
        t->next = NULL;
        if(front==NULL) front=rear=t;
        else {
            rear->next = t;
            rear = t;
        }
    }
}

int dequeue() {
    int x=-1;
    Node *p;
    if(front==NULL)
        cout << "Queue is empty";
    else {
        p=front;
        front=front->next;
        x=p->data;
        free(p);
    }
    return x;
}

void display(struct Node *t) {
    struct Node *tmp;
    tmp = t;
    while(tmp!=NULL) {
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main() {
    enqueue(1);
    enqueue(1);
    enqueue(1);
    display(front);
    dequeue();
    display(front);
    return 0;
}