#include <bits/stdc++.h>
using namespace std;

int main() {
	// chu so dau tien va cuoi cung 28282828 => 2 8
	long long n; cin >> n;
	int last = n % 10;
	int first = 0;
	while(n!=0) { // n >= 10 and n/=10 and cout << n;
		first = n % 10;
		n/=10;
	}
	cout << first << " " << last << endl;
	
	return 0;
}
