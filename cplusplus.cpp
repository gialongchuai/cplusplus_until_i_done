#include <bits/stdc++.h>
using namespace std;

int pos[100];

int main() { // dem mang con do dai` bang 7: luu luon tan suat
			//13 7
			//3 -2 2 0 0 1 1 2 0 0 4 3 5
			// 3 1 3 3 3 4 5 7 7 7 11 14 19 7 => tong cong don
			//7
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
		if(m.count(sum-k)) ans+=m[sum-k];
		if(sum==k) ans++;
		m[sum]++;
		cout << sum << " ";
	}
	cout << endl << ans;
 
	return 0;
}









