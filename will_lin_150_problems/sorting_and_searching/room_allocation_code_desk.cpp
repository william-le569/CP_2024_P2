#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=0;
    cin >> n;
    vector<pair<pair<int, int>, int>> bookings(n);
    for(int i=0; i<n; ++i) {
        cin >>bookings[i].first.first >> bookings[i].first.second;
        bookings[i].second = i;
    } 
    sort(bookings.begin(), bookings.end());
    int room = 0;
    vector<int> booked(n);
    set<pair<int, int>> emptyRoom;
    for(int i=0; i<n; ++i) {
        if(emptyRoom.empty()) {
        room++;
        emptyRoom.insert({bookings[i].first.second, room});
        booked[bookings[i].second] = room;
        }
        else {
            auto it = emptyRoom.begin();
            pair<int, int> firstDeparture = *it; // returns a pair <int, int>
            if(firstDeparture.first < bookings[i].first.first) {
                emptyRoom.erase(*emptyRoom.begin()); // why defaultly delete emptyRoom.begin()
                                                    // , because ->emptyRoom has already sorted 
                                                    //-> the begin() is the one who departing first
                emptyRoom.insert({bookings[i].first.second, firstDeparture.second});
                booked[bookings[i].second] = firstDeparture.second;
            }
            else { // -> if matching -> room++.
                room++;
                emptyRoom.insert({bookings[i].first.second, room});
                booked[bookings[i].second] = room;
            }
        }

    }
    cout << room << "\n";
    for(int i=0; i<n; ++i) {
        cout << booked[i] << " ";
    }
    return 0;
}

