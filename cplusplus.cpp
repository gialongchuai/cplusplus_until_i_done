#include <bits/stdc++.h>
using namespace std;

int main() {
	// chu so dau tien lon nhat : 9012019 => YES
	int n; cin >> n;
	int max_digit = n % 10;
	int r;
	// Toi uu 
	while(n>=10) {
		r = n % 10;
		if(r > max_digit) max_digit = r;
		n/=10;
	}
	if(n >= max_digit) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	
	// lan nao lap cung phai? xet dien kien
	while(n>=10) {
		r = n % 10;
		if(r > max_digit) max_digit = r;
		n/=10;
		if(n>=0 && n <=9) {
			cout << n << endl;
			if(n >= max_digit) {
				cout << "YES";
			} else {
				cout << "NO";
			}
		}
	}
	
	return 0;
}
