#include <bits/stdc++.h>
using namespace std;

bool check_upper(string s) {
	for(char x : s) {
		if(x<65||x>90) return false; // if(!isupper(x)) return false;
	}
	return true;
}

int main() { // dem cac tu tat ca in hoa
	string s;
	int cnt = 0;
	while(cin >> s) {
		if(check_upper(s)) cnt++;
	}
	cout << cnt;

	return 0;
}






