#include <bits/stdc++.h>
using namespace std;

int main() {
	// chu so lon nhat : 2829292 => 9
	int n; cin >> n;
	int max_digit = n % 10;
	int r;
	while(n!=0) {
		r = n % 10;
		if(r > max_digit) max_digit = r;
		n/=10;
	}
	cout << max_digit << endl;
	
	return 0;
}
