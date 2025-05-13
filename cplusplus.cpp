#include <bits/stdc++.h>
using namespace std;

int main() { // cout tu theo tan xuat ke ben tu
			// cach 01: a10c1d1u1c1u2c1d1c1a1b1c1z1u1b1d1u4b1a2
			// => aaaaaaaaaacducuucdcabczubduuuubaa
	string s; cin >> s;
	for(int i = 0; i<s.size(); i++) {
		int tmp = 1;
		string so = "";
		while(isdigit(s[i+tmp])) {
			so+=s[i+tmp];
			tmp++;
		}
		int x = stoi(so);
		for(int j = 0; j<x; j++) {
			cout << s[i];
		}
		i += tmp - 1;
	}
	
	cout << endl;
	
	char c; // cach 02: a10c1d1u1c1u2c1d1c1a1b1c1z1u1b1d1u4b1a2
	int n;
	while(cin >> c >> n) {
		for(int i = 0; i<n; i++) cout << c;
	}
	
	return 0;
}






