#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, s; cin >> n >> s; // so luong coin va can` dat gia tri s ton it dong xu nhat
	int coins[n]; // co the su dung nhieu dong xu
	vector<int> dp(s+1, 1e9); // dp[i]=x : can ton IT NHAT x dong xu de tao ra gia tri i
	for(int i=0; i<n; i++) cin >> coins[i];
	
	dp[0] = 0; // can ton it nhat 0 dong xu hay ns 0 khong can dong xu
	for(int i=1; i<=s; i++) { // nao tao thanh gia tri 0 -> sure to andotut
		for(int c=0; c<n; c++) {
			int coin = coins[c]; // voi moi dong xu hop le
			if(i>=coin && dp[i-coin]!=1e9) // co the chon dong xu nay` khong khi i>=coin tuc gia tri xet >= coin moi chon duoc chu'
				dp[i] = min(dp[i], dp[i-coin] + 1); // neu chon dong xu thi` +1 dong xu hien tai va
		}								// cong them toi thieu dong xu da tinh tai dp[i-coin] 
	}
	if(dp[s] == 1e9) cout << -1;
	else cout << dp[s];
	
	return 0;
}
