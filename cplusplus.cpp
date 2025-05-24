#include <bits/stdc++.h>
using namespace std;

int a[100];
int n;
int xuoi[100], nguoc[100], cot[100];

void Try(int i) { // i quay toi n lot duoc vao if thi` in ra
	for(int j = 1; j<=n; j++) {
		if(xuoi[i-j+n] == 0 && nguoc[i+j-1] == 0 && cot[j] == 0) { // dam bao dat tai vi tri nay khong bi an
			a[i] = j; // a[hang] = cot;
			xuoi[i-j+n] = 1; nguoc[i+j-1] = 1; cot[j] = 1; // dam bao duong cheo chinh, phu, va cot khong duoc dung lai
													// tuc la cac con khac khong bi an nhau
			if(i==n) { // dam bao het vong for phai thoa man, quay toi 8 ma khong thoa if thi` backtrack
				for(int row = 1; row<=n; row++) { // hang
					for(int col =1; col <=n; col++) { // cot
						if(a[row] == col) cout << "#"; // a[hang] = cot
						else cout << ".";
					}
					cout << endl;
				}
				cout << endl;
			} else {
				Try(i+1); // co gang toi 8 de in ra voi dieu kien phai nhay vao if khong ay backtrack
			} // neu quay tiep toi thang kia khong thoa
			xuoi[i-j+n] = 0; nguoc[i+j-1] = 0; cot[j] = 0; // tra lai cho thang cu di
		}
	}
}

int main() { // 
	cin >> n;
	Try(1);
	
	return 0;
}












