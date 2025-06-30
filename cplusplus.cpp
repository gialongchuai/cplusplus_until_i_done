#include<bits/stdc++.h>
using namespace std;

int a[500][500];

int main() { // matrix thanh ds canh va ds ke voi do thi co huong
			//5
			//0 0 0 1 0
			//1 0 1 1 1
			//1 0 0 1 1
			//1 0 0 0 0
			//0 1 0 1 0
			//
			//1 4
			//2 1
			//2 3
			//2 4
			//2 5
			//3 1
			//3 4
			//3 5
			//4 1
			//5 2
			//5 4
			//
			//1 : 4
			//2 : 1 3 4 5
			//3 : 1 4 5
			//4 : 1
			//5 : 2 4
	int n; cin >> n;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			int x; cin >> x;
			a[i][j] = x;
		}
	}
	cout << endl;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			if(a[i][j]) cout << i << " " << j << endl;
		}
	}
	cout << endl;
	for(int i=1; i<=n; i++) {
		cout << i << " : ";
		for(int j=1; j<=n; j++) {
			if(a[i][j]) cout << j << " ";
		}
		cout << endl;
	}
		
	return 0;
}













