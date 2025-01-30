#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 3, 2, 3, 5, 3, 2, 1, 2};
    unordered_map<int, int> freq; // Hash map to store frequencies

    // Count the frequency of each element
    for (int num : arr) {
        freq[num]++;
    }

    // Find the element with the maximum frequency
    int maxFreq = 0;
    int maxElement = arr[0];
    for (auto &elem : freq) {
        if (elem.second > maxFreq) {
            maxFreq = elem.second;
            maxElement = elem.first;
        }
    }

    cout << "Element with the highest frequency: " << maxElement << endl;
    cout << "Frequency: " << maxFreq << endl;

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> arr = {1, 3, 2, 3, 5, 3, 2, 1, 2};
//     unordered_map<int, int> freq; // Hash map to store frequencies

//     // Count the frequency of each element
//     for (int num : arr) {
//         freq[num]++;
//     }

//     // Find the element with the maximum frequency
//     int maxFreq = 0;
//     int maxElement = arr[0];
//     for (auto it = freq.begin(); it != freq.end(); ++it) {
//         if (it->second > maxFreq) {
//             maxFreq = it->second;
//             maxElement = it->first;
//         }
//     }

//     cout << "Element with the highest frequency: " << maxElement << endl;
//     cout << "Frequency: " << maxFreq << endl;

//     return 0;
// }