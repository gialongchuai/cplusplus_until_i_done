#include<bits/stdc++.h>
using namespace std;

int C[1005][1005];

int main() { // xay dung tam giac pascal
		//1 		// C00
		//1 1 		// C01 C11
		//1 2 1		// C02 C12 C22
		//1 3 3 1
		//1 4 6 4 1
		//1 5 10 10 5 1
		//1 6 15 20 15 6 1
		// => ung dung tinh to hop chap k cua n chia du 10^9+7
		
		// tv : 5
		//9 0
		//13 8
		//16 7
		//9 9
		//7 6
		//		result : 
		//5
		//9 0
		//1
		//13 8
		//1287
		//16 7
		//11440
		//9 9
		//1
		//7 6
		//7
	for(int i = 0; i<1000; i++) {
		for(int j = 0; j <= i; j++) {
			if(j==0 || i == j) C[i][j] = 1; // cot 1 va` duong` cheo chinh'
			else {
				C[i][j] = C[i-1][j-1] + C[i-1][j];
				C[i][j] %= 1000000007;
			}
		}
	}
	int q; cin >> q;
	while(q--) {
		int n, k; cin >> n >> k;
		cout << C[n][k] << endl;
	}
	
	return 0;
}
