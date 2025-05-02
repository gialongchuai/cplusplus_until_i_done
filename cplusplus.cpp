#include <bits/stdc++.h>
using namespace std;

int main() { //	5
			// 3 1 5 2 3
	int n; cin >> n;
	map<int,int> m;
	for(int i = 0 ; i<n; i++) {
		int tmp; cin >> tmp;
		m.insert({tmp, 100}); // tmp => 1:100 2:100 3:100 5:100
	}
	cout << m.size() << endl; // size: 4
	for(pair<int,int> x : m) {
		cout << x.first << " " << x.second << endl; // cout tmp 1:100 2:100 3:100 5:100
	}
	
	m[3] = 999;
	for(pair<int,int> x : m) {
		cout << x.first << " " << x.second << endl; // cout tmp 1:100 2:100 3:999 5:100
	}
	
	m[901] = 902;
	for(pair<int,int> x : m) {
		cout << x.first << " " << x.second << endl; // cout tmp 1:100 2:100 3:999 5:100 901:902
	}
	
	map<int,int>::iterator it;
	for(it = m.begin(); it!=m.end(); it++) {
		cout << (*it).first << " " << (*it).second << endl; // cout tmp 1:100 2:100 3:999 5:100 901:902
	}
	
	cout << "=====" << endl;
	map<int, int>::iterator mp = m.find(3);
	cout << (*mp).first << " " << (*mp).second << endl; // 3:999
	
	if(m.count(7)) { // 3 : YES
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl; // ting ting if change value => 3 => YES
	}
	
	m.erase(901);
	for(it = m.begin(); it!=m.end(); it++) {
		cout << (*it).first << " " << (*it).second << endl; // 1:100 2:100 3:999 5:100 {901:902 : deleted}
	}
	
	map<int,int>::iterator mp_sacua = m.find(2);
	m.erase(mp_sacua);
	for(pair<int,int> x : m) {
		cout << x.first << " " << x.second << endl; // 1:100 {2:100:deleted} 3:999 5:100
	}
	
	return 0;
}









