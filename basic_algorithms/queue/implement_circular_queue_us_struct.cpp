// // implement circular queue using struct

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
//     q->front = q->rear = 0;
//     q->Q = new int[q->size];
// }

// void enqueue(struct Queue *q, int x) {
//     if((q->rear+1)%q->size==q->front) 
//         cout << "Queue is full\n";
//     else {
//         q->rear = (q->rear+1)%q->size;
//         q->Q[q->rear] = x;
//     }
// }

// int dequeue(struct Queue *q) {

//     int x=-1;

//     if(q->rear==q->front)
//         cout << "Queue is empty\n";
//     else {
//         // int x;
//         q->front=(q->front+1)%q->size;
//         x = q->Q[q->front];
//     }
//     return x;
// }

// void Display(struct Queue q) {
//     int i = q.front+1;
//     do {
//         cout << q.Q[i] << " ";
//         i=(i+1)%q.size;
//     } while(i!=(q.rear+1)%q.size);
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


// attempt 1
#include <bits/stdc++.h>
using namespace std;

struct CircularQueue {
    int front, rear, size;
    int *Q;
};

void create(struct CircularQueue *q, int size) {
    q->size = size;
    q->front = q->rear = 0;
    q->Q = new int[q->size];
}

bool isFull(struct CircularQueue q) {
    return ((q.rear+1)%q.size==(q.front));
}

bool isEmpty(struct CircularQueue q) {
    return (q.rear==q.front);
}


void enqueue(struct CircularQueue *q, int x) {
    if(isFull(*q)) cout << "CircularQueue is full\n";
    else {
        q->rear = (q->rear+1)%q->size;
        q->Q[q->rear] = x;
    }
}

int dequeue(struct CircularQueue *q) {
    int x = -1;
    if(isEmpty(*q)) {
        cout << "CircularQueue is empty\n";
        return -1;
    }
    else {
        q->front = (q->front+1)%q->size;
        x = q->Q[q->front];
        return x;
    }
    
}

void display(struct CircularQueue q) {
    // for(int i=q.front+1; i!=(q.rear+1)%q.size; i=((i+1)%q.size))
    //     cout << q.Q[i] << " ";
    // cout << endl;
    if (isEmpty(q)) {
        cout << "Queue is empty\n";
        return;
    }
    int i = (q.front+1)%q.size;
    do {
        cout << q.Q[i] << " ";
        i=(i+1)%q.size;
    } while(i!=(q.rear+1)%q.size);
    cout << endl;
}


int main() {
    struct CircularQueue q;
    create(&q, 5);
    
    enqueue(&q, 5);
    enqueue(&q, 15);
    enqueue(&q, 25);
    enqueue(&q, 35);
    enqueue(&q, 45);
    display(q);

    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    display(q);

    enqueue(&q, 5);
    enqueue(&q, 10);
    enqueue(&q, 15);
    enqueue(&q, 20);
    display(q);
    

    return 0;
}

// gpt

// #include <bits/stdc++.h>
// using namespace std;

// struct CircularQueue {
//     int front, rear, size;
//     int *Q;
// };

// void create(struct CircularQueue *q, int size) {
//     q->size = size;
//     q->front = q->rear = 0;
//     q->Q = new int[q->size];
// }

// bool isFull(struct CircularQueue q) {
//     return ((q.rear + 1) % q.size == q.front);
// }

// bool isEmpty(struct CircularQueue q) {
//     return (q.rear == q.front);
// }

// void enqueue(struct CircularQueue *q, int x) {
//     if (isFull(*q)) {
//         cout << "CircularQueue is full\n";
//     } else {
//         q->rear = (q->rear + 1) % q->size;
//         q->Q[q->rear] = x;
//     }
// }

// int dequeue(struct CircularQueue *q) {
//     if (isEmpty(*q)) {
//         cout << "CircularQueue is empty\n";
//         return -1; // Return a sentinel value
//     } else {
//         q->front = (q->front + 1) % q->size;
//         return q->Q[q->front];
//     }
// }

// void display(struct CircularQueue q) {
//     if (isEmpty(q)) {
//         cout << "Queue is empty\n";
//         return;
//     }
//     int i = (q.front + 1) % q.size;
//     do {
//         cout << q.Q[i] << " ";
//         i = (i + 1) % q.size;
//     } while (i != (q.rear + 1) % q.size);
//     cout << endl;
// }

// int main() {
//     struct CircularQueue q;
//     create(&q, 5);

//     enqueue(&q, 5);
//     enqueue(&q, 15);
//     enqueue(&q, 25);
//     enqueue(&q, 35);
//     display(q);

//     dequeue(&q);
//     dequeue(&q);
//     dequeue(&q);
//     dequeue(&q);
//     display(q);

//     enqueue(&q, 5);
//     enqueue(&q, 10);
//     enqueue(&q, 15);
//     enqueue(&q, 20);
//     display(q);

//     return 0;
// }