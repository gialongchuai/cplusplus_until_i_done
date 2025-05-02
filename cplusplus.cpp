#include <bits/stdc++.h>
using namespace std;

int main() { // xuat cac so khac nhau cung tang so xuat hien trong day
	int n; cin >> n;
	map<int,int> m, m1;
	int a[n];
	for(int i = 0; i<n; i++) {
		cin >> a[i];
		m[a[i]]++;
	}
	for(pair<int,int> x : m) {
		cout << x.first << " " << x.second << endl;
	}
	cout << "=======" << endl;
	for(int x : a) {
		if(m[x]!=0) {
			cout << x << " " << m[x] << endl;
			m[x] = 0;
		}
	}
	
	return 0;
}









