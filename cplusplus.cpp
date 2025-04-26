#include <bits/stdc++.h>
using namespace std;

int main() {
	// tinh tong va dem chu so nguyen: n = 7832 => 10 : 4
	// 7 / 10 = 0
	int sum = 0, cnt =0;
	int n; cin >> n;
	if(n==0) {
		cout << 0 << " " << 1;
	} else {
			while(n!=0) {
			sum+=n%10;
			n/=10;
			cnt++;
		}
		cout << sum << " " << cnt;
	}

	return 0;
}
