#include <bits/stdc++.h>
using namespace std;

int main() { // tong chu so trong chuoi string
	// an1h28w102msnc => 128102 => 14
	string s;
	cin >> s; // nho la chuoi khong dau space moi dung` cin
	int sum = 0;
	for(int i = 0; i < s.size(); i++) {
		if(isdigit(s[i])) { // kiem tra chu so; chu cai la isalpha
			cout << s[i]; // 128102
			sum+=s[i] - '0';
		}
	}
	cout << endl << sum << endl; // 14
	
	for(char x : s) {
		if(isalpha(x)) {
			cout << x; // anhwmsnc
		}
	}
 	 
	return 0;
}






