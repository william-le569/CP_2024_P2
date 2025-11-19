#include <bits/stdc++.h>
using namespace std;

struct Activity {
    int start, finish;
};

bool cmp(Activity a, Activity b) {
    return a.finish < b.finish; // sắp xếp theo thời gian kết thúc
}

int main() {
    int n;
    cin >> n;
    vector<Activity> activities(n);
    for(int i = 0; i < n; i++)
        cin >> activities[i].start >> activities[i].finish;

    sort(activities.begin(), activities.end(), cmp);

    int count = 0;
    int lastFinish = 0;

    for(auto a : activities) {
        if(a.start >= lastFinish) {
            count++;
            lastFinish = a.finish;
        }
    }

    cout << count << "\n";
}
//test sample
// 4
// 1 3
// 2 5
// 3 9
// 6 8