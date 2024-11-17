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
	
	int t = (1 << 13); //  1000 0000 0000 0000 0000: 8192 if t >> 1 : divide the number by 2 0100 0000 0000 0000 4096
                        // this technique is useful to represent power(2,x);
	int m = n - 1;
	int sum = 0;
	for (int i = 0; i < m; ++i) {
		while ((i + t) > m) t = t >> 1; //Where is it from to get this idea? -> this solution seems to ignore some other possibilities.
		a[i+t] += a[i]; // prove this formula
		sum += a[i];
		printf("%d\n", sum);
	}
}