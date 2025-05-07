#include <bits/stdc++.h>
using namespace std;

int main() { // 10
			//1 2 2 2 2 4 5 6 7 110
			//2
			//2
			
			// 10
			//1 2 2 2 2 4 5 6 7 110
			//88
			//7
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a,a+n);
	int x; cin >> x;
	int res = 0;
	int l = 0, r = n - 1;
	bool flag = false;
	while(l<=r) {
		int m = (l+r) / 2;
		if(a[m] <= x) {
			res = m;
			l = m + 1; 
			flag = true;
		} else {
			r = m -1;
		}
	}
	if(flag) {
		cout << a[res] << endl;
	} else {
		cout << "NOT FOUND!" << endl;
	}
	for(int x : a) {
		cout << x << " ";
	}
	
	return 0;
}









