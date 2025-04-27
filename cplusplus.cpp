#include <bits/stdc++.h>
using namespace std;

bool check_tang(int n) {
	while(n>=10) {
		int a = n % 10;
		int b = n/10%10;
		n/=10;
		if(b >= a) return false;
	}
	return true;
}

int main() {
	// tang: 1234 => 1 12334 => 0
	long long n; cin >> n; 
	cout << check_tang(n);
	return 0;
}
