#include <bits/stdc++.h>
using namespace std;

int main() { // 2 cach hoan vi 2 hang trong ma tran vuong
			// 5
			// 1 2 3 4 10
			// 5 6 7 8 12
			// 9 10 1 2 3
			// 2 3 5 7 6
			// 4 6 2 1 6
			// 2 3
			// 1 2 3 4 10
			// 9 10 1 2 3  	*******
			// 5 6 7 8 12  	*******
			// 2 3 5 7 6
			// 4 6 2 1 6
	int n; cin >> n;
	int a[n][n];
	for(int i = 0; i <n; i++) {
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	
	int h1, h2; cin >> h1 >> h2;
	for(int i = h1-1; i < n; i++) {
		for(int j = 0; j<n; j++) {
			int tmp = a[i][j];
			a[i][j] = a[h2-1][j];
			a[h2-1][j] = tmp;
		}
		break;
	}

	// bp
	for(int j = 0; j<n; j++) {
		int tmp = a[h1-1][j];
		a[h1-1][j] = a[h2-1][j];
		a[h2-1][j] = tmp;
	}
	
	for(int i = 0; i<n; i++) {
		for(int j = 0; j <n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}









