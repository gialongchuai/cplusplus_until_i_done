#include <bits/stdc++.h>
using namespace std;

int main() {
	//weight = [2, 3, 4, 5]
	//value  = [3, 4, 5, 6]
	//W = 8
	
	//4 8
	//2 3 4 5
	//3 4 5 6
	//10
	
	int dp[105] = {0};
	
	int n, W; cin >> n >> W;
	int w[n+1] = {0}, v[n+1] = {0};
	for(int i=1; i<=n; i++) cin >> w[i];
	for(int i=1; i<=n; i++) cin >> v[i];
	
	for(int i=1; i<=n; i++) {
		int we = w[i];
		for(int j=W; j>=we; j--) {
			dp[j] = max(dp[j], dp[j-w[i]]+v[i]);
		}
	}
	cout << dp[W];
	
	return 0;
} 
