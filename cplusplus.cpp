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
	//4 2
	
	int dp[105][105] = {0};
	
	int n, W; cin >> n >> W;
	int w[n+1] = {0}, v[n+1] = {0};
	for(int i=1; i<=n; i++) cin >> w[i];
	for(int i=1; i<=n; i++) cin >> v[i];
	
	for(int j=1; j<=W; j++) {
		dp[0][j]=0;
	}
	
	for(int i=1; i<=n; i++) {
		for(int j=0; j<=W; j++) {
			dp[i][j] = dp[i-1][j];
			if(j>=w[i]) dp[i][j] = max(dp[i][j], dp[i-1][j-w[i]]+v[i]);
		}
	}
	cout << dp[n][W] << endl;
	
	int j = W;
	for(int i=n; i>=1; i--) {
		if(dp[i][j] != dp[i-1][j]) {
			cout << i << " ";
			j-=w[i];
		}
	}
	
	return 0;
} 
