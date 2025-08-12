#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int a[n];
	for(int &i : a) cin >> i;
	int sum=0, best=0;
	for(int i=0; i<n; i++) {
		sum = max(a[i],sum+a[i]);
		best = max(best, sum);
	}
	cout << best << "\n";
	
	return 0;
}
