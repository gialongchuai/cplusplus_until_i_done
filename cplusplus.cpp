#include <bits/stdc++.h>
using namespace std;



int main() { // dem so phan tu khac nhau trong mang : sort 
	int n, x; cin >> n;
	int a[n];
	for(int i = 0; i <n; i++) {
		cin >> a[i];
	}
	sort(a,a+n);
	int min_val = a[1] - a[0];
	for(int i = 0; i<n-1;i++) {
		int r = a[i+1] - a[i];
		if(r<min_val) min_val = r;
	}
	cout << min_val;
	
	return 0;
}









