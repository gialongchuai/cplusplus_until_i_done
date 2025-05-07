#include <bits/stdc++.h>
using namespace std;

bool snt(int n){
	if(n<2) return false;
	for(int i = 2; i*i<=n;i++) {
		if(n%i==0) return false;
	}
	return true;
}

int main() { // mang 2 chieu; count phan tu la snt tren cheo chinh
			// cheo phu khong trung` nhau
	int n; cin >> n;
	int a[n][n];
	for(int i = 0; i <n; i++) {
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	int cnt = 0;
	for(int i = 0; i <n; i++) {
		if(snt(a[i][i])) cnt++;
		if(snt(a[i][n-i-1])) cnt++;
	}
	if(n%2!=0) {
		int tmp = n/2;
		if(snt(a[tmp][tmp])) cnt--;
	}
	cout << cnt;
	
	return 0;
}









