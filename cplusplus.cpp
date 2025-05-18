#include <bits/stdc++.h>
using namespace std;

int pos[100];

int main() { // mang danh dau: dem day con co tong bang k
			//10 7
			//3 1 1 2 4 3 2 5 4 1
			//
			//3 4 5 7 11 14 16 21 25 26
			//3 4 5 7 11 14 16 21 25 26
			//4
	int n, k; cin >> n >> k;
	int a[n];
	set<int> s;
	for(int i = 0; i <n ;i++) {
		cin >> a[i];
	}
	for(int i =0; i<n; i++) {
		if(i == 0) pos[0] = a[0];
		int x = pos[i-1] + a[i];
		pos[i] = x;
		s.insert(x);
	}
	int cnt = 0;
	cout << endl;
	for(int i = 0; i <n; i++) {
		cout << pos[i] << " ";
	}
	cout << endl;
	for(int x: s) {
		cout << x << " ";
	}
	cout << endl;
	if(s.count(k)) cnt++;
	for(int i = 0; i <n; i++) {
		if(s.count(pos[i] - k)) cnt++;
	}
	cout << cnt;

	return 0;
}









