#include<bits/stdc++.h>
using namespace std;

int main() { // nhap tv, moi tv q tang k o vi tri left right
			// theo mang hieu => mang cong don`
			// 3 2 1 2 3 2 1
			//3
			//0 5 0
			//0 3 1
			//0 5 1
			// => 5 4 3 4 4 3 1
			// => 5 4 3 4 4 3 1
	int n; cin >> n;
	int a[n];
	int mang_hieu[n];
	for(int i = 0; i<n; i++){
		cin >> a[i];
	}
	for(int i = 0; i<n; i++){
		if(i==0) {
			mang_hieu[0] = a[0];
		} else {
			mang_hieu[i] = a[i] - a[i-1];
		}
	}
	int q; cin >> q;
	while(q--) {
		int l, r, tang; cin >> l >> r >> tang;
		for(int i = l; i<=r; i++) {
			a[i] += tang;
		}
		
		mang_hieu[l] += tang;
		mang_hieu[r+1] -= tang;
	}
	for(int x : a) {
		cout << x << " ";
	}
	
	cout << endl;
	int tong = 0;
	for(int x : mang_hieu) {
		tong += x;
		cout << tong << " ";
	}
	
	return 0;
}
