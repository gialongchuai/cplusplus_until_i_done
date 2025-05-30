#include<bits/stdc++.h>
using namespace std;

int main() { // tim chuoi con dai` nhat khong lien tiep 
			//abzuvt adxuzv
			//1 2 3 4 5 6
			//a b z u v t
			//a d x u z v
			//1 2 3 4 5 6
			
			//0 0 0 0 0 0 0
			//0 1 1 1 1 1 1
			//0 1 1 1 1 1 1
			//0 1 1 1 1 2 2
			//0 1 1 1 2 2 2
			//0 1 1 1 2 2 3
			//0 1 1 1 2 2 3
			
			//3 => result : auv
	string x, y; cin >> x >> y;
	int n = x.size();
	int m = y.size();
	char s[500]; // khong duoc s[n+1] nhe' : bp => string s = " " + x;
	char t[500];
	for(int i=1; i<=n; i++) { // luu tung string vao mang s char va` t char start tu` 1
		s[i] = x[i-1];
	}
	for(int i=1; i<=m; i++) {
		t[i] = y[i-1];
	}
	for(int i=1; i<=n; i++) {
		cout << s[i] << " ";
	}
	cout << endl;
	for(int i=1; i<=m; i++) {
		cout << t[i] << " ";
	}
	cout << endl;
	
	int F[500][500] = {0}; // bai toan con cot 0 hang 0 bang 0 het
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++) {
			if(s[i] == t[j]){ // xet tung ki tu neu bang nhau thi i-1 j-1 => + them 1 don vi
				F[i][j] = F[i-1][j-1] + 1;
			} else { // khac nhau thi` lay max voi cot - 1 va hang - 1;
				int max_val = max(F[i-1][j], F[i][j-1]);
				F[i][j] = max_val;
			}
		}
	}
	for(int i=0; i<=n; i++) {
		for(int j=0; j<=m; j++) {
			cout << F[i][j] << " ";
		}
		cout << endl;
	}
	cout << F[n][m]; // ket qua la gia tri cuoi cung trong ma tran F

	return 0;
	//ZHFTDFHF
	//TFISHROV
	//Z H F T D F H F
	//T F I S H R O V
	//0 0 0 0 0 0 0 0 0
	//0 0 0 0 0 0 0 0 0
	//0 0 0 0 0 1 1 1 1
	//0 0 1 1 1 1 1 1 1
	//0 1 1 1 1 1 1 1 1
	//0 1 1 1 1 1 1 1 1
	//0 1 2 2 2 2 2 2 2
	//0 1 2 2 2 3 3 3 3
	//0 1 2 2 2 3 3 3 3
	//3
}










