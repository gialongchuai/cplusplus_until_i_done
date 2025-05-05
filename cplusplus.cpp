#include <bits/stdc++.h>
using namespace std;

long long giai_thua[1000000];
long long mod = 1e9+7;

int main() { // giai thua chia du 
	int n, x; cin >> n;
	giai_thua[0] = 1;
	for(long long i = 1; i<=1000000; i++) {
		giai_thua[i] = i * giai_thua[i-1];
		giai_thua[i] %= mod;
	}
	while(n--) {
		cin >> x;
		cout << giai_thua[x] << endl;
	}
	
	return 0;
}









