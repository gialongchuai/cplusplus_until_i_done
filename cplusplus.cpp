#include <bits/stdc++.h>
using namespace std;

int cnt[1000001];

int main() { // mang danh dau dem so phan tu khac nhau trong mang
	int n; cin >> n;
	int a[n];
	for(int i = 0; i<n; i++) {
		cin >> a[i];
	}
	
	int max_val = a[0];
	for(int i = 0; i<n; i++) {
		cnt[a[i]] = 1;
		if(a[i] > max_val) max_val = a[i];
	}
	
	for(int i = 0; i<= 1000000; i++) { // in cac so khac nhau
		if(cnt[i] == 1) cout << i << " ";
	}
	cout << endl;
	
	for(int i = 0; i <n; i++) { // in cac so khac nhau theo thu tu xuat hien
		if(cnt[a[i]] == 1) {
			cout << a[i] << " ";
			cnt[a[i]] = 0;
		}
	}
			
	return 0;
}









