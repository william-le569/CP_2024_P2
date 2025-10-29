#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct vec {
    int x, y;
    // logic operators.
    bool operator<(const vec &p) {
        if(x != p.x) return x < p.x;
        else return y < p.y;
    }
    bool operator>(const vec &p) {
        if(x != p.x) return x > p.x;
        else return y > p.y;
    }
    // assigning operators.
    vec& operator=(const vec &p) {
        x = p.x;
        y = p.y;
        // return {x,y}; // if you write {x,y} -> it is a pair, not a vec type.
        return *this; // this command makes sure that = operator returns a pointer. If we don't use this a = b = c will be wrong.
    }

};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // your code here
    vec a = {3,2}, b = {2,3};
    bool res = a < b;
    // cout << res;
    vec c;
    c = a;
    // cout <<  c.x;

    vec array[4] = {{1,2}, {1,3}, {4,2}, {3,3}};

    sort(array, array + 4);
    sort(array, array + 4, [](vec& a, vec& b) {
        if(a.x != b.x) return(a.x > b.x);
        else return(a.y > b.y);
    });

    for(const auto& ele: array) {
        cout << ele.x << " " << ele.y << "\n";
    }

    return 0;
}