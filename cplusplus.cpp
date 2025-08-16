#include<bits/stdc++.h>
using namespace std;

int main() {
	//8
	//10 9 2 5 3 7 101 1
	
	//1 1 1 2 2 3 4 1 => cout 4 la day con dai` nhat : 2 3 7 101
	
	//	1 2 5 8
	//	1 2 3 1?	=> so 1 do se tinh nhu sau: (lay d[3] = max(1 : 1+1 : 1+2 : 1+3) lay max)
	
	int n; cin >> n;
	int a[n];
	for(int &i : a) cin >> i;
	vector<int> dp(n, 1); // voi moi phan tu ton tai do dai chinh no la 1
	
	for(int i=1; i<n; i++) {
		for(int j=0; j<i; j++) {
			if(a[j] < a[i])
				dp[i] = max(dp[i], dp[j] + 1);
		}
	}
//	sort(dp.begin(), dp.end());
	for(int x : dp) cout << x << " ";
	
	return 0;
}
