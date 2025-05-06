#include <bits/stdc++.h>
using namespace std;

int main() { // tim phan tu x xuat hien o vi tri dau tien, cuoi cung 
			// : first_pos ; last_pos
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
		if(a[m] == x) {
			res = m;
			r = m - 1; // l = m + 1 neu tim vi tri xuat hien cuoi
			flag = true;
		} else if(a[m] > x) {
			r = m - 1;
		} else {
			l = m + 1;
		}
	}
	if(flag) {
		cout << res << endl;
	} else {
		cout << "NOT FOUND!" << endl;
	}
	for(int x : a) {
		cout << x << " ";
	}
	
	return 0;
}









