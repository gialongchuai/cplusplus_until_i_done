#include <bits/stdc++.h>
using namespace std;

int main() { // 2 con tro : dem tong con lien tiep lon hon s
	//5 7
	//1 2 3 4 5  		=> 1234 12345 234 2345 345 45
	//
	//6
	int n, s; cin >> n >> s;
	int a[n+5];
	for(int i=1; i<=n; i++) {
		cin >> a[i];
	}
	int ans = 0, sum = 0;
	int l = 1;
	for(int r=1; r<=n; r++) {
		sum+=a[r];
		while(sum > s && l <= r) { 
			ans+=(n-r+1);
			sum-=a[l];
			l++;
		}
	}
	cout << endl << ans << endl;

    return 0;
}
