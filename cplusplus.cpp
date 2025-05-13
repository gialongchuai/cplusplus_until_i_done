#include <bits/stdc++.h>
using namespace std;

int main() { // dem so luong tu xuat hien lien tuc theo thu tu cua day
			// aacducuucdcabczubduuuubaa
			// => a2c1d1u1c1u2c1d1c1a1b1c1z1u1b1d1u4b1a2
	string s; cin >> s;
	vector<pair<char, int>> v;
	int cnt = 1;
	for(int i = 0; i<s.size();i++) {
		if(s[i] == s[i+1]) {
			cnt++;
		}
		else {
			v.push_back({s[i], cnt});
			cnt = 1;
		}
	}
	for(pair<char,int> x : v) {
		cout << x.first << x.second;
	}
	
	return 0;
}






