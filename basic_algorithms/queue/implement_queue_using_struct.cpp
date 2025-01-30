// #include <bits/stdc++.h>
// using namespace std;

// struct Queue {
//     int front;
//     int rear;
//     int size;
//     int *Q;
// };

// void create(struct Queue *q, int size) {
//     q->size = size;
//     q->front = q->rear = -1;
//     q->Q = new int[q->size];
// }

// void enqueue(struct Queue *q, int x) {
//     if(q->rear==q->size-1) 
//         cout << "Queue is full\n";
//     else {
//         q->rear++;
//         q->Q[q->rear] = x;
//     }
// }

// int dequeue(struct Queue *q) {

//     int x=-1;

//     if(q->rear==q->front)
//         cout << "Queue is empty\n";
//     else {
//         // int x;
//         q->front++;
//         x = q->Q[q->front];
//     }
//     return x;
// }

// void Display(struct Queue q) {
//     for(int i=q.front+1; i<=q.rear; ++i) {
//         cout << q.Q[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     struct Queue q;
//     create(&q, 5);
//     enqueue(&q, 1);
//     enqueue(&q, 2);
//     enqueue(&q, 3);
//     enqueue(&q, 4);
//     enqueue(&q, 5);
//     Display(q);

//     dequeue(&q);
//     Display(q);
//     return 0;
// }


// Self-implement classic queue using struct - attempt 1
// #include <bits/stdc++.h>
// using namespace std;

// struct Queue {
//     int front;
//     int rear;
//     int size;
//     int *Q;
// };

// void create(struct Queue *q, int size) {
//     q->size = size;
//     q->front = q->rear = -1;
//     q->Q = new int[q->size];
// }


// bool isFull(struct Queue q) {
//     return (q.rear==q.size-1);
// }

// bool isEmpty(struct Queue q) {
//     return (q.front==q.rear);
// }

// void enqueue(struct Queue *q, int x) {
//     if(isFull(*q)) cout << "Queue is full\n";
//     else {
//         q->rear++;
//         q->Q[q->rear] = x;
//     }
// }

// int dequeue(struct Queue *q) {
//     int x;
//     if(isEmpty(*q)) cout << "Queue is empty\n";
//     else {
//         x = q->Q[q->front+1];
//         q->front = q->front+1;
//     }

//     return x;
// }

// void display(struct Queue q) {
//     for(int i=++q.front; i<=q.rear; ++i) {
//         cout << q.Q[i] << " ";
//     }
// }


// int main() {
//     struct Queue q1;
//     create(&q1, 5);
//     enqueue(&q1, 5);
//     enqueue(&q1, 10);

//     display(q1);
//     dequeue(&q1);
//     display(q1);
//     return 0;
// }

// Self-implement classic queue using struct - attempt 2

#include <bits/stdc++.h>
using namespace std;

struct Queue {
    int front, rear, size;
    int *Q;
};

void create(struct Queue *q, int size) {
    q->size = size;
    q->front = -1;
    q->rear = -1;
    q->Q = new int[q->size];
}

bool isEmpty(struct Queue q) {
    return (q.front == q.rear);
}

bool isFull(struct Queue q) {
    return (q.rear==q.size-1);
}

void enqueue(struct Queue *q, int x) {
    if(isFull(*q)) cout << "Queue is full\n";
    else {
        q->Q[++q->rear] = x;
    }
}

int dequeue(struct Queue *q) {
    int x;
    if(isEmpty(*q)) cout << "Queue is empty\n";
    else {
        x = q->Q[q->front+1];
        ++q->front;
    }
    return x;
}

void display(struct Queue q) {
    for(int i=++q.front; i<=q.rear; ++i)
        cout << q.Q[i] << " ";
    cout << endl;
}
int main() {
    struct Queue q1;
    create(&q1, 5);

    enqueue(&q1, 5);
    enqueue(&q1, 15);
    enqueue(&q1, 25);
    enqueue(&q1, 35);
    display(q1);

    dequeue(&q1);
    dequeue(&q1);
    dequeue(&q1);
    dequeue(&q1);
    display(q1);

    enqueue(&q1, 5);
    enqueue(&q1, 10);
    enqueue(&q1, 15);
    enqueue(&q1, 20);
    display(q1);


    return 0;
}