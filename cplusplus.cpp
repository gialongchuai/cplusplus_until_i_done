#include <bits/stdc++.h>
using namespace std;

int main() { // cout ki tu duoc lap lai lan dau tien
			// 5nLQoktlQgU7
			// => Q
			
			// 1245
			// => NONE
	string s; cin >> s;
	map<char,int> m;
	
	bool flag = true;
	for(char x : s) {
		m[x]++;
		if(m[x] == 2) {
			flag = false;
			cout << x;
			break;
		}
	}
	if(flag) cout << "NONE";

	return 0;
}






