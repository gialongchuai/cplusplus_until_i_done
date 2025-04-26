#include <bits/stdc++.h>
using namespace std;

int main() {
	// tinh h, tinh p, tinh s cua so nguyen la n(s) cho truoc
	// 
	long long n; cin >> n;
	long long gio = n / 3600;
	long long phut = (n%3600) / 60;
	long long giay = ((n%3600)%60); // giay = n % 60
	cout << "h: " << gio << " p: " << phut << " s: " << giay;

	return 0;
}
