#include <bits/stdc++.h>
using namespace std;
int a[100];
int n; // gia tri ket thuc

void QL(int i) { // gia tri ban dau bat dau
	for(int j = 0; j <= 1; j++) { // cac gia tri can luu tru
		a[i] = j; // luu tru
		if(i==n) {
			for(int k = 1; k <=n; k++) { // du end in ra
				cout << a[k];	
			}
			cout << endl;
		} else {
			QL(i+1); // try dat end
		}
	}
}


int main() { // quay lui sinh nhi phan
	cin >> n;
	QL(1);
		
	return 0;
}









