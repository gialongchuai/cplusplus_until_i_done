#include <bits/stdc++.h>
using namespace std;

int main() { // dem so luong tu xuat hien lien tuc theo thu tu cua day
			// aacducuucdcabczubduuuubaa
			// => a2c0d0u0c0u1c0d0c0a0b0c0z0u0b0d0u3b0a1
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






