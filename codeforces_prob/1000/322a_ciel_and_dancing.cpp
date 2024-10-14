//----------------------------------------------------------------

// #include <cstdio>
// #include <cstring>
// #include <algorithm>
// #include <queue>
// #include <set>
// using namespace std;
// const int maxn = 2*1e6+3;
// int a[maxn], b[maxn];
 
 
 
// int n;
// vector < pair <int, int> > v;
// int main() {
//     int i, j, n, m;
//     scanf("%d%d", &n, &m);
//     int ans = 0;
//     for(i = 1; i <= n; i++) {
//         for(j = 1; j <= m; j++) {
//                 if(!a[i] ||!b[j]) {
//                         v.push_back(make_pair(i, j));
//                         a[i] = b[j] = 1;
//                         ans++;
//                 }
//         }
//     }
//     printf("%d\n", ans);
//     for(i = 0; i < v.size(); i++)
//         printf("%d %d\n", v[i].first, v[i].second);
//     return 0;
// }

//-------------------------------------------------------------

// #include<cstdio>
// #include<cstring>
// int B[101],G[101];
// int main(){
// 	int n,m,k;
// 	scanf("%d%d",&n,&m);
// 	k=0;
// 	for(int i=1;i<=n;i++)
// 		for(int j=1;j<=m;j++){
// 			if(B[i]==0 || G[j]==0){
// 				k++;
// 				B[i]=1; G[j]=1;
// 			}
// 		}
// 	memset(B,0,sizeof(B));
// 	memset(G,0,sizeof(G));
// 	printf("%d\n",k);
// 	for(int i=1;i<=n;i++)
// 		for(int j=1;j<=m;j++){
// 			if(B[i]==0 || G[j]==0){
// 				printf("%d %d\n",i,j);
// 				B[i]=1; G[j]=1;
// 			}
// 		}
// }

//---------------------------------------------------

// # include <iostream>
 
// using namespace std;
 
// int n,m;
 
// int main ()
// {
// 	cin >> n >> m;
	
// 	cout << n+m-1 << "\n";
	
// 	for ( int h = 1; h <= m; h++ )	cout << 1 << " " << h << "\n";
	
// 	for ( int h = 2; h <= n; h++ )	cout << h << " " << 1 << "\n";
	
// return 0;	
// }

// -------------------------------------------------------------------
// do myself.

#include <bits/stdc++.h>
using namespace std;

int main() {
	char B[101], G[101];
	int n, m;
	int k = 0;

	cin >> n >> m;

	memset(B, 0, sizeof(B));
	memset(G, 0, sizeof(G));

	for(int i = 1; i <= n; ++i) {
		for(int j = 1; j <= m; ++j) {
			if( B[i] == 0 || G[j] == 0) {
				B[i] = 1;
				G[j] = 1;
				k++;
			}
		}
	}

	cout << k << endl;

	memset(B, 0, sizeof(B));
	memset(G, 0, sizeof(G));

	for(int i = 1; i <= n; ++i) {
		for(int j = 1; j <= m; ++j) {
			if( B[i] == 0 || G[j] == 0) {
				cout << i << " " << j << endl;
				B[i] = 1;
				G[j] = 1;
				
			}
		}
	}

	return 0;
}