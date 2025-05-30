#include<bits/stdc++.h>
using namespace std;

int F[500][500];

int main() { // bai toan cai tui
		//4 9 		// 4 do vat luu thanh lan luot 1 2 3 4
		//3 1 5 6	// 9 la trong luong tui
		//20 10 30 15 // can nang tuong ung cua 4 do` vat
		//
		//4 9
		//0 3 1 5 6
		//0 20 10 30 15
		//
		//0  0  0  0  0  0  0  0  0  0
		//0  0  0 20 20 20 20 20 20 20
		//0 10 10 20 30 30 30 30 30 30
		//0 10 10 20 30 30 40 40 50 60
		//0 10 10 20 30 30 40 40 50 60
		//60
	int n, V; cin >> n >> V;

	int w[n+1] = {0}, v[n+1] = {0};
	for(int i=1; i<=n; i++) {
		cin >> w[i];		
	}
	for(int i=1; i<=n; i++) {
		cin >> v[i];		
	}
	cout << endl << n << " " << V << endl;
	for(int i : w) cout << i << " ";
	cout << endl;
	for(int i : v) cout << i << " ";
	cout << endl; // bai toan con: dong 0, cot 0 = 0 het (tui = 0, 0 chua do vat)
	for(int i=1; i<=n; i++) { // moi dong di tu do vat 1 den n
		for(int j=1; j<=V; j++) { // moi cot di tu trong luong 1 den max
			F[i][j] = F[i-1][j]; // mac dinh khong tinh i (do vat hien tai)
			if(j-w[i] >= 0) { // dam bao luong tui con lai da duoc tinh va` nam trong mang F
				int tmp  = F[i-1][j-w[i]] + v[i]; // trong luong v[i] + them 1 luong con lai. 
				if(tmp > F[i][j]) { // neu luong con lai thoa tuc la co trong mang thi` cong don` vao`
					F[i][j] = tmp; // lon hon gia tri thi` gan' lai
				}
			}
		}
	}
	cout << endl;
	for(int i=0; i<=n; i++) {
		for(int j=0; j<=V; j++) {
			cout << F[i][j] << " ";
		}
		cout << endl;
	}
	cout << F[n][V]; // cout gia tri toi da khong vuot qua khoi luong tui chua V
		
	return 0;
}













