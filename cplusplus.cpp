#include <bits/stdc++.h>
using namespace std;

int main() {
	// tong so trong day 
	int n; cin >> n;
	int sum = 0;
	for(int i = 0; i<n; i++) {
		char c; cin >> c;
		if(c>='0' && c<='9') {
			sum += c - '0'; // neu khong -0 thi no se lay vi du 0 48, 1 49,
							// nen 49 - '0'  = 49 - 48 = 1
		}
	}	
	cout << sum;
	
	return 0;
}
