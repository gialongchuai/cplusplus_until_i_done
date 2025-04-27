#include <bits/stdc++.h>
using namespace std;

int main() {
	// tong do chenh lech : 28939 = 6 + 1 + 6 + 6 = 19
	long long n; cin >> n;
	int sum = 0;
	while(n>=10) { 
		sum += (int)abs((n%10) - ((n/10)%10)); // khoi can` ep' kieu? cung~ dc
		n/=10;
	}
	cout << sum << endl;
	
	return 0;
}
