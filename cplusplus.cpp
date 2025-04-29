#include <bits/stdc++.h>
using namespace std;

int main() { // bp count min trong day
	int n; cin >> n;
	int a[n];
	for(int i = 0; i<n; i++) {
		cin >> a[i];
	}
	int min_val = a[0], cnt = 0;
	for(int i = 0; i<n; i++) {
		if(a[i] < min_val){
			min_val = a[i];
			cnt = 1;
		} else if(a[i] == min_val) {
			++cnt;
		}
	}
	
	cout << cnt;
	
	return 0;
}









