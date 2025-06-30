#include<bits/stdc++.h>
using namespace std;

int a[500][500], b[500][500];

int main() { // matrix thanh ds canh va ds ke
			//5	// 5 dinh tuong ung cho so 1 trong ma tran la ke
			//0 1 1 1 0		
			//1 0 0 1 1
			//1 0 0 1 1
			//1 1 1 0 1
			//0 1 1 1 0
			//	
			//2 1		// do thi vo huong nen output 1 khong can liet ke canh con lai
			//3 1		// liet ke co dinh cao: 1:2 vs 2:1 => choose 2:1
			//4 1
			//4 2
			//5 2
			//4 3
			//5 3
			//5 4
			//
			//1 : 2 3 4		// output 2: liet ke all dinh ke
			//2 : 1 4 5
			//3 : 1 4 5
			//4 : 1 2 3 5
			//5 : 2 3 4
	int n; cin >> n;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			int x; cin >> x;
			a[i][j] = x;
			b[i][j] = x;
		}
	}
	cout << endl;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			if(a[i][j]) {
				cout << j << " " << i << endl;
			}
			a[j][i] = 0; 
		}
	}
	cout << endl;
	for(int i=1; i<=n; i++) {
		cout << i << " : ";
		for(int j=1; j<=n; j++) {
			if(b[i][j]) {
				cout << j << " ";
			}
		}
		cout << endl;
	}
		
	return 0;
}













