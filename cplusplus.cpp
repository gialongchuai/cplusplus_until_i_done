#include <bits/stdc++.h>
using namespace std;

long long F[100];

char Find(long long n, long long k) {
	cout << n << " " << k << endl;
	if(n==1) return 'A';
	if(n==2) return 'B';
	if(k<=F[n-2]) {
		return Find(n-2, k);
	} else {
		return Find(n-1, k-F[n-2]);
	}
}

int main() {
	F[1] = 0, F[1] = 1;
	for(int i = 2; i<=92; i++) {
		F[i] = F[i-2] + F[i-1];
	}

	// A B AB BAB
	long long n, k;
	cin >> n >> k;
	cout << Find(n,k);
}










