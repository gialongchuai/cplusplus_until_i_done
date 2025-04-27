#include <bits/stdc++.h>
using namespace std;

int main() {
	// digital root 12345 => 15 => 6
	long long n; cin >> n;
	while(n>10) {
		int tong = 0;
		while(n!=0) {
			tong += n%10;
			n/=10;
		}
		n = tong;
	}
	cout << n << endl;
	
	return 0;
}
