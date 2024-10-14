#include<bits/stdc++.h>
 
using namespace std;
 
#define el '\n'
#define f(i, n) for(int i = 0; i < int(n); ++i)
#define ll long long
 
void solve()
{
    int s, n; cin >> s >> n;
    vector<pair<int, int>> dragons;
    for(int i = 0; i < n; ++i)
    {
        int z, y; cin >> z >> y;
        dragons.push_back({z, y});
    }
    sort(dragons.begin(), dragons.end());
    for(int i = 0; i < dragons.size(); ++i)
    {
        if(s > dragons[i].first)
            s += dragons[i].second;
        else
        {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
}
 
int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
 
    //cin >> t;
    while(t--){
        solve();
    }
 
    return 0;
}