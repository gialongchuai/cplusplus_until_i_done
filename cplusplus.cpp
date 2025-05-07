#include <bits/stdc++.h>
using namespace std;

int main() { // cho 2 day: voi moi phan tu day 1 
			// thi co bao nhieu so nho hon no ben day 2
			// 5 8
			// 2 8 7 2 8 			{2:1,0,1} ; {8:3,7,1,0,4,1,5} ...
			// 9 3 7 1 0 4 1 5
			// => 3 7 6 3 7
	int n, m; cin >> n >> m;
	int a[n], b[m];
	for(int i = 0; i <n; i++) {
		cin >> a[i];
	}
	for(int i = 0; i <m; i++) {
		cin >> b[i];
	}
	for(int x : a) {
		int cnt = 0;
		for(int y : b) {
			if(y<x) cnt++;
		}
		cout << cnt << " ";
	}
	cout << endl;
	sort(b,b+m);
	for(int x : b) {
		cout << x << " ";
	}
	cout << endl;

	for(int x : a){
		int res = 0;
		int l = 0, r = m - 1;
		bool flag = true;
		while(l<=r) {
			int m = (l+r) / 2;
			if(b[m] < x) {
				l = m + 1;
				res = m;
				flag = false;
			} else {
				r = m - 1;
			}
		}
	if(flag) cout << res << " ";
	else cout << res+1 << " ";
	}
	
	return 0;
}









