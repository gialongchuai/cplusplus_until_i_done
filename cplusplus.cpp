#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int a[n];
	set<int> s;
	map<int,int> m;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		s.insert(a[i]);
		m[a[i]] = 100;
	}
	sort(a, a+n);

	int x; cin >> x;
	set<int>::iterator it = s.find(x); // truy van theo set
	if(it!=s.end()) {
		cout << "YES" << endl;
	}else {
		cout << "NO" << endl;
	}
	
	map<int,int>::iterator it_01 = m.find(x); // truy van theo map
	if(it_01!=m.end()) {
		cout << "YES" << endl;
	}else {
		cout << "NO" << endl;
	}
	
	int t, e; cin >> t; // truy van theo binary_search
	while(t--) {
		cin >> e;
		if(binary_search(a,a+n,e)) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	
	return 0;
}









