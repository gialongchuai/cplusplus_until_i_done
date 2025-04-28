#include <bits/stdc++.h>
using namespace std;

bool snt(int n) {
	if (n<2) return false;
	for(int i=2; i*i<=n; i++) {
		if(n%i==0) return false;
	}
	return true;
}

int main() {
	// kiem tra so nguyen to
	long long n; cin >> n;
	cout << snt(n);
	
	return 0;
}
