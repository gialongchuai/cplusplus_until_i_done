#include <bits/stdc++.h>
using namespace std;

bool mang_doi_xung_01(int a[], int n) {
	for(int i = 0; i<n/2; i++) {
		if(a[i]!=a[n-1- i]) return false;
	}
	return true;
}

bool mang_doi_xung_02(int a[], int n) {
	int l = 0, r = n - 1;
	while(l<r) {
		if(a[l]!=a[r]) return false;
		l++, r--;
	}
	return true;
}

void lat_nguoc(int a[], int n) {
	int l = 0, r = n-1;
	int temp;
	while(l < r){
		temp = a[l];
		a[l] = a[r];
		a[r] = temp;
		l++, r--;
	}
}

int main() { // mang doi xung + lat nguoc mang
	int n; cin >> n;
	int a[n];
	for(int i = 0; i<n; i++) {
		cin >> a[i];
	}
	cout << mang_doi_xung_01(a,n) << endl;
	cout << mang_doi_xung_02(a,n) << endl;
	
	lat_nguoc(a,n);
	for(int x : a) {
		cout << x << " ";
	}
	return 0;
}









