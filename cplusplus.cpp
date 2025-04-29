#include <bits/stdc++.h>
using namespace std;

bool snt(int n) {
	if(n<2) return false;
	for(int i = 2; i*i <=n; i++) {
		if(n%i==0) return false;
	}
	return true;
}

int main() { // avg cac so nguyen to trong array // round 3 chu so thap phan
			/*
				5
				-911 234 151 347 231
				=>249.000
			*/
	int n; cin >> n;
	int a[n];
	for(int i = 0; i<n; i++) {
		cin >> a[i];
	}
	int cnt = 0, tong = 0;
	for(int x : a) {
		if(snt(x)) {
			tong+=x;
			cnt++;
		}
	}
	double avg = 1.0 * tong / cnt;
	cout << fixed << setprecision(3) << avg;
	
	return 0;
}









