#include <bits/stdc++.h>
using namespace std;



int main() { // tong cong don truy cap l, r 
	int n; cin >> n;
	int a[n];
	int b[n];
	
	for(int i = 0; i<n; i++) {
		cin >> a[i];
	}
	
	b[0] = a[0];
	for(int i = 1; i<n; i++) {
		b[i] = a[i] + b[i-1];
	}
	int x; cin >> x;
	int l, r;
	while(x--){
		cin >> l >> r;
		l--, r--; // follow 2 cach thuan` va khong thuan` :)
//		int sum = 0; // cach 01
//		for(int i = l; i <= r; i++) {
//			sum+=a[i];
//		}
//		cout << sum;
		if(l==0) cout << b[r];  // cach 02
		else 
			cout << b[r] - b[l-1];
	}
	
	return 0;
}









