#include <bits/stdc++.h>
using namespace std;

int main() {
	// tong so trong day 
	int n; cin >> n;
	int sum = 0;
	for(int i = 0; i<n; i++) {
		char c; cin >> c;
		if(c>='0' && c<='9') {
			sum += c - '0';
		}
	}	
	cout << sum;
	
	return 0;
}
