#include <bits/stdc++.h>
using namespace std;

bool check_so_dep(string s) {
	for(int i =0; i < s.size() -1; i++) {
		int x = abs(s[i] - s[i+1]); 
		if(x!=1) {
			return false;
		}
	}
	return true;
}

int main() { // kiem tra so dep voi so cuc lon 	
			// 1212321 => yes
			// 679 => no
	string s;
	cin >> s;
	if(check_so_dep(s)) {
		cout << "YES";
	} else {
		cout << "NO";
	}
 	 
	return 0;
}






