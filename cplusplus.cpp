#include <bits/stdc++.h>
using namespace std;

int main() {
	// 1 2 4 7 11 16 22 29 37 46 .... < n (buoc nhay tang 1)
	long long n; cin >> n;
	int r = 0;
	for(int i = 1; i < n; i+=r) {
		cout << i << " ";
		r++;
	}
	
	return 0;
}
