#include <bits/stdc++.h>
using namespace std;

int main() { // dat 3 dau cong vao 3 so lon nhat khong thay doi so dau` tien
			//6 3
			//9560 5571 9008 3649 1473 3782
			
			// => 22799
	int n, k; cin >> n >> k;
	int a[n];
	for(int i = 0; i<n; i++) {
		cin >> a[i];  
	}
	sort(a+1,a+n, greater<int>()); // sort giam dan
	for(int x : a) {
		cout << x << " " ;
	}
	cout << endl;
	int ans = 0;
	for(int i = 0; i < n; i++) {
		if(i <= k) {
			ans += a[i];
		} else {
			ans -= a[i];
		}
	}
	cout << ans;
	
	return 0;
}









