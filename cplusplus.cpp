#include <bits/stdc++.h>
using namespace std;

int cnt[1000001];

int main() { // mang danh dau
	int n; cin >> n;
	int a[n];
	for(int i = 0; i<n; i++) {
		cin >> a[i];
	}
	
	int max_val = a[0];
	for(int i = 0; i<n; i++) {
		cnt[a[i]]++;
		if(a[i] > max_val) max_val = a[i];
	}
	
	for(int i = 0; i<= max_val; i++) { // in theo thu tu tang dan cung voi tan so xuat hien
		if(cnt[i] != 0) {
			cout << i << " " << cnt[i] << endl; 	
		}
	}
	cout << "============" << endl;
	
	for(int i = 0; i<n; i++) { // in theo thu tu xuat hien cung voi tan suat tuong ung
		if(cnt[a[i]] != 0) {
			cout << a[i] << " " << cnt[a[i]] << endl;
			cnt[a[i]] = 0;
		}
	}
			
	return 0;
}









