#include<bits/stdc++.h>
using namespace std;

int a[500][500];
int prefix[500][500];
int prefix_2[500][500];

int main() { // tinh tong hcn ben trong ma tran
			//7 7
			//2 1 1 5 5 6 7
			//2 5 4 2 2 2 8
			//1 4 3 4 2 3 9
			//3 2 2 2 1 2 2
			//4 2 5 2 2 1 2
			//1 3 3 2 4 1 3
			//3 1 6 1 5 4 5
			//
			// 4 2    // hang 2 cot 3 => hang 3 cot 4
			// 3 4*
			
			// chuyen thanh ma tran cong don prefix
			// 2 3   4 9 14 20 27
			// 4 10 15 22 29 37 52
			// 5 15 23 34 43 54 78
			//8 20 30 43 53 66 92
			//12 26 41 56 68 82 110
			//13 30 48 65 81 96 127
			//16 34 58 76 97 116 152
			
			// 4* = 34 - (tren 22 = 9) - (trai 23 = 15) 
			// = 10 + (1:2 = 3 // do - tren - trai da duplicate) = 13 == 4+2+3+4
	int n, m; cin >> n >> m;

	for(int i = 1; i<=n ;i++) {
		for(int j = 1; j <=m; j++) {
			cin >> a[i][j];
		}
	}
	cout << endl;
	for(int i = 1; i<=n ;i++) {
		for(int j = 1; j <=m; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	
	for(int i = 1; i<=n ;i++) {
		for(int j = 1; j <=m; j++) {
			int tong = 0;
			for(int i1 = 0; i1 <=i; i1++) {
				for(int j1 = 0; j1 <= j; j1++) {
					tong += a[i1][j1];
				}
			}
			prefix[i][j] = tong;
		}
	}
	
	cout << endl;
	for(int i = 1; i<=n ;i++) {
		for(int j = 1; j <=m; j++) {
			cout << prefix[i][j] << " ";
		}
		cout << endl;
	}
	
	for(int i=1; i<=n; i++) { // i-1 or j-1 tai hang 1 cot 1 thi no' = 0 tranh loi truy cap !!!!!!!
		for(int j =1; j<=m;j++) {
			prefix_2[i][j] = prefix_2[i-1][j] + prefix_2[i][j-1] - prefix_2[i-1][j-1] + a[i][j];
		}
	}
	
	cout << endl;
	for(int i = 1; i<=n ;i++) {
		for(int j = 1; j <=m; j++) {
			cout << prefix_2[i][j] << " ";
		}
		cout << endl;
	}
	int h1, h2, cot1, cot2;
	cin >> h1 >> h2 >> cot1 >> cot2; // hang 2 cot 3 => hang 3 cot 4 // => 2 3 3 4
	int result = prefix_2[h2][cot2] - prefix_2[h1-1][cot2] - prefix_2[h2][cot1-1] + prefix_2[h1-1][cot1-1];
	cout << result; // 13 = 4+2+3+4
		
	return 0;
}
