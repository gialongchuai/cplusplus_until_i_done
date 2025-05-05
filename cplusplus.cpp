#include <bits/stdc++.h>
using namespace std;



int main() { // tron 2 day tang dan
	int n, m; cin >> n >> m;
	int a[n];
	int b[m];
	
	for(int i = 0; i<n; i++) {
		cin >> a[i];
	}
	for(int i = 0; i<m; i++) {
		cin >> b[i];
	}
	int l = 0, r = 0;
	while (l<n && r<m) {
		if(a[l] < b[r]) {
			cout << a[l] << " ";
			l++;
		} else {
			cout << b[r] << " ";
			r++;
		}
	}
	while(l<n) { // neu dung if in a[n-1] co the sot so 5 trong 2 day : 1 2 3 5 8 / 1 2 3
		cout << a[l] << " "; l++;
	} 
	while(r<m) {
		cout << b[r] << " "; r++;
	} 
	
	return 0;
}









