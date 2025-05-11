#include <bits/stdc++.h>
using namespace std;

bool check_01(string s) { // check giam
	for(int i = 0; i < s.size() - 1; i++) {
		if(s[i] < s[i+1]) {
			return false;
		}
	}
	return true;
}
bool check_02(string s) { // check tang
	for(int i = 0; i < s.size() - 1; i++) {
		if(s[i] > s[i+1]) {
			return false;
		}
	}
	return true;
}

int main() { 
	string s; cin >> s;
	if(check_02(s)||check_01(s)) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	
	return 0;
}






