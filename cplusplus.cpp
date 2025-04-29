#include <bits/stdc++.h>
using namespace std;

int main() { // cout cac phan tu khac nhau theo vi tri xuat hien
	int n; cin >> n;
	int a[n];
	for(int i = 0; i<n; i++) {
		cin >> a[i];
	}

	for(int i = 0 ; i < n; i++) {
		int flag = true;
		for(int j = i - 1 ; j >= 0; j--) {
			if(a[i] == a[j]) flag = false;
		}
		if(flag) cout << a[i] << " ";
	}
		
	return 0;
}









