#include <bits/stdc++.h>
using namespace std;

bool chinh_phuong(long long n) {
	int can = sqrt(n);
	if(1ll * can * can == n) return true;
	return false;
}

int main() {
	// cout so chinh phuong trong doan [a,b]
	long long a, b; cin >> a >> b;
	for(long long i=a; i<=b; i++) {
		if(chinh_phuong(i)) {
			cout << i << " ";
		}
	}
	return 0;
}
