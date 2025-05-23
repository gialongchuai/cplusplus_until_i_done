#include <bits/stdc++.h>
using namespace std;
int a[100];
int n, k; // gia tri ket thuc

void QL(int i) { // gia tri ban dau bat dau voi gia tri ban dau la 1
	for(int j = a[i-1]+1; j <= n-k+i; j++) { // cac gia tri can luu tru
		a[i] = j; // luu tru voi j luon lon hon 1 don vi
		if(i==k) {
			for(int e = 1; e <=k; e++) { // du end in ra
				cout << a[e];	
			}
			cout << endl;
		} else {
			QL(i+1); // try dat end
		}
	}
}


int main() { // quay lui sinh nhi phan
	cin >> n >> k;
	QL(1);
		
	return 0;
}









