#include <bits/stdc++.h>
using namespace std;

int main() { // dem mang con co tong chia het cho k
			// tong chia du cong don value map
	int n, k; cin >> n >> k;
	int a[n];
	for(int i = 0; i<n; i++) {
		cin >> a[i];
	}
	int sum = 0;
	int ans = 0;
	map<int,int> m;
	for(int i = 0; i<n; i++) {
		sum+= a[i];
		if(sum == k || sum == 0) ans++;
		sum%=k;
		if(m.count(sum)) ans += m[sum];
		m[sum]++;
	}
	cout << ans;
 
	return 0;
}









