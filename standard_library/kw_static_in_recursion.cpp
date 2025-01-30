#include <iostream>
using namespace std;


void countRecursiveCalls(int n) {
    static int count = 0; // Initialized only once , static keyword -> variable is allocated in Data Segment not in Stack nor Heap.
    count++;
    cout << count << " ";
    if (n > 0) {
        countRecursiveCalls(n - 1);
    }
    if (n == 0) { // Print the count at the base case
        cout << "Number of recursive calls: " << count << endl;
    }
}

int main() {
    countRecursiveCalls(5); // Output: Number of recursive calls: 6
    return 0;
}