#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
} *first = NULL;

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
        p = p->next;
    }
}

bool detectCircle(struct Node *p) {
    struct Node *slow, *fast;
    slow = p;
    fast = p;
    while(slow && fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) {
            return true;
        }
    }
    return false;
}

int main() {
    int A[] = {8, 5, 4, 7, 3, 9};
    Create(&first, A, 6);
    struct Node *ele1, *ele2;
  
    ele1 = first->next->next;
    ele2 = first->next->next->next->next->next;
    ele2->next = ele1;

    cout << ((detectCircle(first))?"True":"False")<< endl;

}