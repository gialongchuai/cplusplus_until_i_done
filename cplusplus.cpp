#include <bits/stdc++.h>
using namespace std;

int main() { // cout value map chan theo thu tu tang giam key
	int n; cin >> n;
	map<int,int> m;
	for(int i = 0; i<n; i++) {
		int x; cin >> x;
		m[x]++;
	}
	for(pair<int,int> x : m) {
		if(x.second%2==0) {
			cout << x.first << " " << x.second << endl;
		}
	}
	
	cout << "===========" << endl;
	map<int,int>::reverse_iterator it;
	for(it = m.rbegin(); it!=m.rend(); it++) {
		if((*it).second%2==0) {
			cout << (*it).first << " " << (*it).second << endl;
		}
	}
	
	return 0;
}









