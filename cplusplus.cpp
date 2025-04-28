#include <bits/stdc++.h>
using namespace std;

long long tong_uoc(long long n) {
	long long sum = 0;
	for (int i = 1; i<=sqrt(n); i++) {
		if(n%i==0) {
			sum+=i;
			cout << "i: " << i << endl;
			if(i != n / i) {
				sum += n / i;
				cout << "n/i: " << n/i << endl;
			}
		}
	}
	return sum;
}

int main() {
	// tong cac uoc cua n : 100 => 217 
	long long n; cin >> n; 
	cout << tong_uoc(n);
	return 0;
}
