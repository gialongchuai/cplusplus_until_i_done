#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b) {
	return a > b;
}

int main() { // nhap tv, moi tv q tang k o vi tri left right
			// 6 2
			// 5 2 5 3 5 1
			//2 5 : truy cap 2 toi 5
			//2 4 : truy cap 2 toi 4
			// 0 2 2 2 1 0 : result
			// => 33
			// => 33
	int n, q; cin >> n >> q;
	int a[n];
	for(int i = 0; i<n; i++) {
		cin >> a[i];
	}
	int mang_hieu[n+1] = {0};
	int b[n] = {0};
	while(q--) {
		int l, r; cin >> l >> r;
		l--, r--;
		for(int i = l; i<=r; i++) {
			b[i]++;
		}
//		int le = l-1;
//		int ri = r-1;
		mang_hieu[l] += 1;
		mang_hieu[r + 1] -= 1;
	}
	sort(a,a+n,cmp);
	sort(b,b+n,cmp);
	int con = 0;
	for(int i = 0; i<n; i++) {
		con+=mang_hieu[i];
		mang_hieu[i] = con; // co the dung mang khac thay vi` dung` mang hieu!!!!
	}
	sort(mang_hieu, mang_hieu + n, cmp);
	int tong = 0;
	for(int i = 0; i<n; i++) {
		tong += a[i] * b[i];
	}
	cout << tong << endl;
	int tong_2 = 0;
	for(int i = 0; i<n; i++) {
		tong_2 += a[i] * b[i];
	}
	cout << tong_2 << endl;
		
	return 0;
}
