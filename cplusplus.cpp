#include <bits/stdc++.h>
using namespace std;

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
int a[100][100];

void dfs(int i, int j, int n, int m) {
	a[i][j] = 0;
	for(int k=0; k<8; k++) {
		int i1 = i + dx[k];
		int y1 = j + dy[k];
		if(i1>=0 && i1 <n && y1>=0 && y1<m && a[i1][y1] == 1) {
			dfs(i1,y1,n,m);
		}
	}
}

int main() { // count island
			// dem xem co bao nhieu mien`, tuc la 4 o xung quanh co bang no khong
			// 4 5
			// 1 1 0 0 0
			// 1 1 0 0 1
			// 1 0 0 1 1
			// 0 1 0 1 1
			// 3 mien` duoc danh dau so 1 rieng biet : dfs
	int n, m; cin >> n >> m;
	for(int i =0; i<n; i++) {
		for(int j = 0; j<m; j++) {
			cin >> a[i][j];
		}
	}
	
	
	int cnt = 0;
	for(int i = 0; i <n; i++) {
		for(int j = 0; j<m; j++) {
			if(a[i][j] == 1) {
				cnt++;
				dfs(i,j,n,m);
			}
		}
	}
	
	cout << cnt;
	
	
	return 0;
}









