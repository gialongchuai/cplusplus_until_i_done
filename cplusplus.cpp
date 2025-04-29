#include <bits/stdc++.h>
using namespace std;

int main() { // cout so lan va tong cac vi tri bang so x
	int n; cin >> n;
	int a[n];
	for(int i = 0; i<n; i++) {
		cin >> a[i];
	}
	int x; cin >> x;
	int cnt = 0;
	for(int i = 0 ; i < n - 1; i++) { // chuan luon 3 8 9 2 4 7 chi can toi 4 la du?
		for(int j = i + 1; j < n; j++) {
			if(a[i] + a[j] == x) {
				cout << a[i] << " " << a[j] << endl;
				cnt++;
			}
		}
	}
	cout << cnt;
		
	return 0;
}









