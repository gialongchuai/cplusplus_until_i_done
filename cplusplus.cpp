#include <bits/stdc++.h>
using namespace std;

int main() { // ghep cap co tong nho hon k
	int n, k; cin >> n >> k;
	int a[n];
	for(int i = 0; i<n; i++) {
		cin >> a[i];  
	}
	sort(a,a+n);
	for(int x : a) {
		cout << x << " ";
	}
	cout << endl;
	int ans = 0;
	for(int i = 0; i < n; i++) {
		int tim = k - a[i];
		int *it = lower_bound(a+i+1,a+n,tim);
		it--;
		ans +=it - (a+i+1); // khong tinh thang i hien tai
	}
	cout << ans;
	

	return 0;
}









