#include <bits/stdc++.h>
using namespace std;

int main() { // truy van phan tu
	set<int> s;
	int n, x; cin >> n;
	for(int i =0; i<n; i++) {
		cin >> x;
		s.insert(x);
	}
	int t; cin >> t;
	while(t--) {
		int x; cin >> x;
		if(s.count(x)) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	
	return 0;
}









