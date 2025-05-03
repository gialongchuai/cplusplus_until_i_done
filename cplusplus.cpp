#include <bits/stdc++.h>
using namespace std;

int main() { 
	int n; cin >> n;
	map<int,int> m;
	vector<pair<int,int>> v;
	for(int i = 0; i<n; i++) {
		int x; cin >> x;
		m[x]++;
	}
	
	for(pair<int,int> x : m) {
		if(x.second%2==0) {
			cout << x.first << " " << x.second << endl;
			v.push_back({x.first, x.second}); // v.push_back(it);
		}
	}
	
	cout << "=========" << endl;
	map<int,int>::reverse_iterator it;
	for(it = m.rbegin(); it!=m.rend(); it++) {
		if((*it).second%2==0) {
			cout << (*it).first << " " << (*it).second << endl;
		}
	}
	
	cout << "==========" << endl;
	for(int i = v.size() - 1; i>=0; i--) {
		cout << v[i].first << " " << v[i].second << endl;
	}
	
	return 0;
}









