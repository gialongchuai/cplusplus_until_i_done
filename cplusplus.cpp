#include <bits/stdc++.h>
using namespace std;
int a[100];
int n;

void QL(int i) {
	for(int j = 0; j <= 1; j++) {
		a[i] = j;
		if(i==n) {
			for(int k = 1; k <=n; k++) {
				cout << a[k];	
			}
			cout << endl;
		} else {
			QL(i+1);
		}
	}
}


int main() { // quay lui sinh nhi phan
	cin >> n;
	QL(1);
		
	return 0;
}









