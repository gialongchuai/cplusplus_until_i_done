#include <bits/stdc++.h>
using namespace std;

bool snt(int n) {
	if (n<2) return false;
	for(int i=2; i*i<=n; i++) {
		if(n%i==0) return false;
	}
	return true;
}

bool csnt(int n) {
	if(n<0) return false;
	int sum = 0;
	while(n) {
		int digit = n%10;
		if(digit!=2 && digit!=3 && digit!=5 && digit!=7) return false;
		sum+=digit;
		n/=10;
	}
	return snt(sum);
}

int main() {
	// kiem tra so thuan nguyen to : {so nguyen to, digit so nguyen to, tong la so nguyen to}
	// 2345 6789 : 15 so
	int a, b; cin >> a >> b;
	int dem = 0;
	for(int i = a; i<=b; i++) {
		if(csnt(i) && snt(i)){
			dem++;
		}
	}
	cout << dem;
	
	return 0;
}
