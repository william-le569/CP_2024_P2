// C++ program to implement Priority Queue
// using Arrays
// #include <bits/stdc++.h>
// using namespace std;

// // Structure for the elements in the
// // priority queue
// struct item {
//     int value;
//     int priority;
// };

// // Store the element of a priority queue
// item pr[100000];

// // Pointer to the last index
// int size = -1;

// // Function to insert a new element
// // into priority queue
// void enqueue(int value, int priority)
// {
//     // Increase the size
//     size++;

//     // Insert the element
//     pr[size].value = value;
//     pr[size].priority = priority;
// }

// // Function to check the top element
// int peek()
// {
//     int highestPriority = INT_MIN;
//     int ind = -1;

//     // Check for the element with
//     // highest priority
//     for (int i = 0; i <= size; i++) {

//         // If priority is same choose
//         // the element with the
//         // highest value
//         if (highestPriority == pr[i].priority && ind > -1
//             && pr[ind].value < pr[i].value) {
//             highestPriority = pr[i].priority;
//             ind = i;
//         }
//         else if (highestPriority < pr[i].priority) {
//             highestPriority = pr[i].priority;
//             ind = i;
//         }
//     }

//     // Return position of the element
//     return ind;
// }

// // Function to remove the element with
// // the highest priority
// void dequeue()
// {
//     // Find the position of the element
//     // with highest priority
//     int ind = peek();

//     // Shift the element one index before
//     // from the position of the element
//     // with highest priority is found
//     for (int i = ind; i < size; i++) {
//         pr[i] = pr[i + 1];
//     }

//     // Decrease the size of the
//     // priority queue by one
//     size--;
// }

// // Driver Code
// int main()
// {
//     // Function Call to insert elements
//     // as per the priority
//     enqueue(10, 2);
//     enqueue(14, 4);
//     enqueue(16, 4);
//     enqueue(12, 3);

//     // Stores the top element
//     // at the moment
//     int ind = peek();  //{{10,2},{14,4}, {16,4}, {12,3}} -> {16,4} highest priority

//     cout << pr[ind].value << endl;
//     cout << ind << endl;
//     // Dequeue the top element
//     dequeue();  //{10,2},{14,4},{12,3} -> 14,4 highest priority

//     // Check the top element
//     ind = peek();
//     cout << pr[ind].value << endl;
//     cout << ind << endl;

//     // Dequeue the top element
//     dequeue();  //{10,2},{12,3} -> 12,3 highest priority

//     // Check the top element
//     ind = peek();
//     cout << pr[ind].value << endl;
//     cout << ind << endl;

//     // Dequeue the top element
//     dequeue();  //{10,2} -> 10,2 highest priority

//     // Check the top element
//     ind = peek();
//     cout << pr[ind].value << endl;
//     cout << ind << endl;

//     return 0;
// }

// --- priority queue - unlimited att1

#include <bits/stdc++.h>
using namespace std;

struct item {
    int value, priority;
};

item pr[10000];

int size = -1;

void enqueue(int value, int priority) {
    ++size;
    pr[size].value = value;
    pr[size].priority = priority;
}

// peek function returns reference of top element in priority queue
int peek() {
    int highestPriority = INT_MIN;
    int indx = -1;

    for(int i=0; i<=size; ++i) {
        if(highestPriority==pr[i].priority && pr[indx].value < pr[i].value && indx > -1) {
            indx = i;
            highestPriority = pr[i].priority;
        }
        else if(highestPriority < pr[i].priority) {
            indx = i;
            highestPriority = pr[i].priority;

        }
    }
    return indx;
}

void dequeue()
{
    // Find the position of the element
    // with highest priority
    int ind = peek();

    // Shift the element one index before
    // from the position of the element
    // with highest priority is found
    for (int i = ind; i < size; i++) {
        pr[i] = pr[i + 1];
    }

    // Decrease the size of the
    // priority queue by one
    size--;
}

int main() {
    enqueue(20,1); //{{20,5}}
    enqueue(21,5); //{{20,5},{21,2}};
    // enqueue(35,1); //{{20,5},{21,2}};
    // cout << size << endl;
    int index = peek();
    cout << index << endl;
    return 0;
}