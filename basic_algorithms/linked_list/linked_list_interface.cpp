#include <iostream>
using namespace std;

// Definition of the Node structure
struct Node {
    int data;
    Node *next;
};

// Function to create a linked list from an array
void Create(struct Node **head, int A[], int size) {
    (*head) = new Node;
    (*head)->data = A[0];
    (*head)->next = NULL;

    struct Node *last, *t;
    last = (*head);

    for (int i = 1; i < size; ++i) {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

// Function to display the elements of the linked list
void Display(struct Node *head) {
    struct Node *current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

// Main function
int main() {
    struct Node *head = NULL;

    // Example array
    int A[] = {10, 20, 30, 40, 50};
    int size = sizeof(A) / sizeof(A[0]);

    // Create the linked list
    Create(&head, A, size);

    // Display the linked list
    cout << "Linked List: ";
    Display(head);

    return 0;
}