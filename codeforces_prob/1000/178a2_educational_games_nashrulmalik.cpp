#include<bits/stdc++.h>
#include<string>
using namespace std;
 
int main() {
	int n;
	cin >> n;
	int a[n];
	
	for (int i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
	}
	
	int t = (1 << 13);
	int m = n - 1;
	int sum = 0;
	for (int i = 0; i < m; ++i) {
		while ((i + t) > m) t = t >> 1;
		a[i+t] += a[i];
		sum += a[i];
		printf("%d\n", sum);
	}
}