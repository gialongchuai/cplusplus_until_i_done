#include <bits/stdc++.h>
using namespace std;

int n = 8;
int chinh[500], phu[500], col[500];
int ans = 0; // dem so cach thoa
int d[105];

char c[500][500];

void printArr() {
	for(int row=0; row<n; row++) {
		for(int col=0; col<n; col++) {
			if(d[row] == col) cout << "Q";
			else cout << ".";
		}
		cout << endl;
	}
	cout << endl;
}

void solve(int k) {
	if(k==n) {
		printArr();
		ans++;
		return;
	} 
	for(int j=0; j<n; j++) {
		if(col[j] == 1 || chinh[k-j+n]==1 || phu[k+j]== 1) continue;
		
		d[k]=j; // dat con hau len ban co khong can backtrack do se dc ghi de`
		col[j] = 1;
		chinh[k-j+n] = 1;
		phu[k+j]=1;
		
		solve(k+1);
		
		col[j] = 0;
		chinh[k-j+n] = 0;
		phu[k+j]=0;
	}
}


int main() {
	// ma tran 8*8 co 99 ban` co dat hau de bat ki khong co hau nao` an nhau;
	// hau an theo hang cot va` 2 duong cheo
	// do duyet theo tung hang nen chi can` xet 3 yeu to con` lai: cot, chinh and phu
	solve(0);
	cout << ans;
	 
	return 0;
}
