#include <bits/stdc++.h>
using namespace std;

int cnt[1000001];

int main() { // mang danh dau dem so phan tu khac nhau trong mang
	int n; cin >> n;
	int a[n];
	for(int i = 0; i<n; i++) {
		cin >> a[i];
	}
	
	for(int i = 0; i<n; i++) {
		cnt[a[i]] = 1;
	}
	
	int dem = 0;
	for(int i = 0; i<= 1000000; i++) {
		if(cnt[i] == 1) ++dem;
	}
	cout << dem;
			
	return 0;
}









