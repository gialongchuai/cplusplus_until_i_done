#include <bits/stdc++.h>
using namespace std;

int main() { // cout phan tu chan o vi tri chan
	int n; cin >> n;
	int a[n];
	for(int i = 0; i<n; i++) {
		cin >> a[i];
	}
	
	int flag = true;
	for(int i = 0 ; i < n; i++) {
		if(i%2==0&&a[i]%2==0) {
			cout << a[i] << " ";
			flag = false;
		}
	}
	if(flag) {
		cout << "NONE";
	}
		
	return 0;
}









