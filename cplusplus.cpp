#include <bits/stdc++.h>
using namespace std;

int pos[100];

int main() { // cach 02 : map : dem day con co tong bang k
			//10 7
			//3 1 1 2 4 3 2 5 4 1
			//
			//3 4 5 7 11 14 16 21 25 26
			//3 4 5 7 11 14 16 21 25 26
			//4
	int n, k; cin >> n >> k;
	int a[n];
	for(int i = 0; i <n ;i++) {
		cin >> a[i];
	}
	map<int,int> m;
	int sum = 0;
	int ans = 0;
	for(int i = 0; i<n; i++) {
		sum+=a[i];
		if(m.count(sum-k)) ans++;
		m[sum] = 1;
	}
	if(m.count(k)) ans++; // truong hop lo sum == k check trong for cung dc
	cout << ans;
 
	return 0;
}









