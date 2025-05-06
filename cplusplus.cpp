#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	int s; cin >> s;
	int l = 0, r = n-1;
	bool flag = false;
	while(l<=r) {
		int m = (l+r)/2;
		if(a[m] == s) {
			flag = true;
			break;
		}else if(a[m] > s) {
			r = m - 1;
		} else {
			l = m + 1;
		}
	}
	if(flag) cout << "YES";
	else cout << "NO";
	
	return 0;
}









