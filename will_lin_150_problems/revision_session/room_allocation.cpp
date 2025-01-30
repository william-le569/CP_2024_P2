//Dec 4 2024
// at 1
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     vector<pair<pair<int, int>, int>> a(n); 
//     for(int i=0; i<n; ++i) {
//         cin >> a[i].first.first >> a[i].first.second; // second -> arrange following departure time.
//         a[i].second = i;
//     }
//     sort(a.begin(), a.end());
//     // use greedy approach
//     set<pair<int, int>> s; // {departure_time, room_number}
//     vector<int> ans(n);
//     int room = 0;
//     for(int i=0; i<n; ++i) {
//         if(s.empty()) {
//             room++;
//             s.insert({a[i].first.second, room});
//             ans[a[i].second] = room;
//         } else {
//             auto it = s.begin();
//             pair<int, int> firstDeparture = *it;
//             if(firstDeparture.first < a[i].first.first) { // case not match -> compare the first departure time.
//                 s.erase(firstDeparture);
//                 s.insert({a[i].first.second, firstDeparture.second});
//                 ans[a[i].second] = firstDeparture.second;
//             }
//             else {
//                 room++;
//                 s.insert({a[i].first.second, room});
//                 ans[a[i].second] = room;
//             }
//         }
//     }
//     cout << room << endl;
//     for(int i=0; i<n; ++i) cout << ans[i] << " ";

//     return 0;
// }

// at 2:

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<pair<int, int>, int>> a(n);
    for(int i=0; i<n; ++i) {
        cin >> a[i].first.first >> a[i].first.second;
        a[i].second = i;
    }
    set<pair<int, int>> s; // {departing_time, room_number}
    int ans[n];
    int room = 0;
    for(int i=0; i<n; ++i) {
        if(s.empty()) {
            room++;
            s.insert({a[i].first.second, room});
            ans[a[i].second] = room;
        } else {
            auto it = s.begin();
            pair<int, int> firstDeparture = *it;
            if(firstDeparture.first < a[i].first.first) {
                s.erase(firstDeparture);
                s.insert({a[i].first.second, firstDeparture.second});
                ans[a[i].second] = firstDeparture.second;
            } else {
                room++;
                s.insert({a[i].first.second, room});
                ans[a[i].second] = room;
            }
        }
    }
    cout << room << endl;
    // cout << s.size() << endl;
    for(int i=0; i<n; ++i) {cout << ans[i] << " ";};

    return 0;
}