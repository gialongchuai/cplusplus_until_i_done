#include <bits/stdc++.h>
using namespace std;

int main() { // cout string theo dk: tat ca cac tu cung tang suat theo thu tu tu` dien?
			// endl + theo thu tu xuat hien tu cung tan suat
			//	bb aa bb cc aa bb cc
			//^Z
			//aa 2
			//bb 3
			//cc 2
			//
			//bb 3
			//aa 2
			//cc 2
	string s;
	map<string,int> m;
	vector<string> v;
	while(cin >> s) {
		if(!m.count(s)) v.push_back(s); // co the them het sau do duyet xong cout ra cho m[x] = 0 ;)))
		m[s]++;
	}
	for(pair<string,int> x : m) {
		cout << x.first << " "<<  x.second << endl;
	}
	cout << endl;
	for(int i = 0; i<v.size(); i++) {
		cout << v[i] << " " << m[v[i]] << endl;
	}
	
	return 0;
}






