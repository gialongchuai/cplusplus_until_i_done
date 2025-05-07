#include <bits/stdc++.h>
using namespace std;

bool snt(int n) {
	if(n<2) return false;
	for(int i = 2; i*i<=n; i++) {
		if(n%i==0) return false;
	}
	return true;
}

int main() { // mang 2 chieu; duyet so nguyen to
	int n, m; cin >> n >> m;
	int a[n][m];
	for(int i = 0; i <n; i++) {
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	
	for(int i = 0; i <n; i++) {
		for(int j = 0; j <m; j++) {
			if(snt(a[i][j])) cout << a[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}









