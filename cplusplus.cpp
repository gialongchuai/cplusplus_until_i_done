#include <bits/stdc++.h>
using namespace std;

int main() {
	// dem le nho hon dem chan
	long long n; cin >> n;
	n = abs(n);
	if(n==0) {
		cout << "28tech" << endl;
	} else {
		int chan=0, le=0;
		int r;
		while(n!=0) {
			r = n % 10;
			if(r%2==0) chan++;
			else le++;
			n/=10;
		}
		cout << le << " " << chan << endl;
		if(le < chan) {
			cout << "28tech";
		} else {
			cout << "29tech";
		}
	}
	
	return 0;
}
