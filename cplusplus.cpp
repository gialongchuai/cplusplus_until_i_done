#include <bits/stdc++.h>
using namespace std;

int main() { // ghep cap co tong lon hon k
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
	for(int i = 0; i<n; i++) {
		int tim = k - a[i]; // phan tu khong phai chi so i
		int *it = upper_bound(a+i+1,a+n,tim);
		ans += n - (it - a);
	}

	cout << ans;
	

	return 0;
}









