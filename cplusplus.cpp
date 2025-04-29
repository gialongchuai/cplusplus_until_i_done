#include <bits/stdc++.h>
using namespace std;

bool snt(int n) {
	if(n<2) return false;
	for(int i = 2; i*i<=n; i++){
		if(n%i==0) return false;
	}
	return true;
}

int main() { // cout thu tu cung voi tan so xuat hien cua 1 so trong day
	int n; cin >> n;
	int a[n];
	for(int i = 0; i<n; i++) {
		cin >> a[i];
	}
	
	for(int i = 0; i < n; i++) {
		bool flag = true;
		int cnt = 1;
		for(int j = i - 1; j >= 0; j--) {
			if(a[i] == a[j]) flag = false;
		}
		if(flag) {
			for(int j = i+1; j<n; j++) {
				if(a[i] == a[j]) ++cnt;
			}
			cout << a[i] << " " << cnt;
			cout << endl;
		}
	}
		
	return 0;
}









