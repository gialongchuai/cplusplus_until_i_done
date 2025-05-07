#include <bits/stdc++.h>
using namespace std;

int main() { // duyet theo pattern
	int n; cin >> n;
	int a[n][n];
	for(int i = 0; i <n; i++) {
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	
	cout << "Pattern 01:\n";
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<n; j++) {
			cout << a[j][i] << " ";
		}
		cout << endl;
	}
	
	cout << "Pattern 02:\n";
	for(int i = n-1; i>=0; i--) {
		for(int j = n-1; j>=0; j--) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << "Pattern 03:\n";
	for(int i = n-1; i>=0; i--) {
		for(int j = 0; j<n; j++) {
			cout << a[j][i] << " ";
		}
		cout << endl;
	}
	
	cout << "Pattern 04:\n";
	for(int i = 0; i<n; i++) {
		for(int j = n-1; j>=0; j--) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}









