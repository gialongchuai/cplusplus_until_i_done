#include <bits/stdc++.h>
using namespace std;

int main() { // khieu vu
	// ghep cap nam cao hon nu : cho 2 day tang dan xong xet tung nam voi nu
	int nam, nu; cin >> nam >> nu;
	int a[nam], b[nu];
	for(int &x : a) cin >> x;
	for(int &x : b) cin >> x;
	int cnt = 0;
	int l = 0, r = 0;
	sort(a,a+nam);
	sort(b,b+nu);
	while(l < nam && r < nu) {
		if(a[l] > b[r]) {
			cnt++; l++; r++;
		} else {
			l++;
		}
	}
	cout << cnt;

	return 0;
}









