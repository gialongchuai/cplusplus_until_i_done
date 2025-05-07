#include <bits/stdc++.h>
using namespace std;

int main() { // co bao nhieu phan tu lon hon x trong day : upper;lower dk : day da sort
			// 13 8
			// 6 2 0 2 2 9 2 7 0 9 8 7 7
			// 7 7 3 4 6 3 0 8
			// 6 2 0 2 2 9 2 7 0 9 8 7 7
			// 0 3 3 4 6 7 7 8
			// 3 7 7 7 7 0 7 1 7 0 0 1 1 lower_bound : phan tu dan tien >= x dung while de dat duoc upper
			// 3 7 7 7 7 0 7 1 7 0 0 1 1 upper_bound : phan tu dan tien > x
	int n, m; cin >> n >> m;
	int a[n], b[m];
	for(int i = 0; i<n; i++) {
		cin >> a[i];
	}
	for(int i = 0; i<m; i++) {
		cin >> b[i];
	}
	for(int x : a ) {
		cout << x << " ";
	}
	cout << endl;

	sort(b,b+m);
	for(int x : b) {
		cout << x << " ";
	}
	cout << endl;
	for(int x : a) {
		int *ptr = lower_bound(b,b+m,x);
		if(*ptr == m) {
			cout << 0 << " ";
		} else {
			while(*ptr==x) {
				*ptr++;
			}
			cout << m - (ptr - b) << " ";
		}
	}
	cout << endl;
	for(int x : a) {
		int *ptr = upper_bound(b,b+m,x);
		int index = ptr - b;
		cout << m - index << " ";
	}
	
	return 0;
}









