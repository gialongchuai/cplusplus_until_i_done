#include <bits/stdc++.h>
using namespace std;



int main() { // dem so phan tu khac nhau trong mang : sort 
	int n, x; cin >> n;
	int a[n];
	for(int i = 0; i <n; i++) {
		cin >> a[i];
	}
	sort(a,a+n);
	int cnt = 1;
	for(int i = 0; i<n-1;i++) {
		if(a[i] != a[i+1]) cnt++;
	}
	cout << cnt;
	
	return 0;
}









