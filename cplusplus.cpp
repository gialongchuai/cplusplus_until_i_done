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
	
	int dem = 0;
	for(int i = 0; i<= max_val; i++) {
		if(cnt[i] == 1) ++dem;
	}
	cout << dem;
			
	return 0;
}









