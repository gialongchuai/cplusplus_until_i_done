#include <bits/stdc++.h>
using namespace std;

bool snt(int n) {
	if(n<2) return false;
	for(int i = 2; i*i<=n; i++){
		if(n%i==0) return false;
	}
	return true;
}

int main() { // cout vi tri phan tu co tong ben trai va tong ben phai la snt
	int n; cin >> n;
	int a[n];
	for(int i = 0; i<n; i++) {
		cin >> a[i];
	}
	
	for(int i = 1 ; i < n - 1; i++) {
		int sum_trai = 0, sum_phai = 0;
		for(int j = i + 1; j < n; j++) {
			sum_phai+=a[j];
		}
		for(int j = i - 1; j>=0; j--) {
			sum_trai+=a[j];
		}
		if(snt(sum_trai) && snt(sum_phai)) {
			cout << i << " ";
		}
	}
		
	return 0;
}









