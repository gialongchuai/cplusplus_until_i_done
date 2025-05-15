#include<bits/stdc++.h>
using namespace std;

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
int n, m;
int a[500][500];

void dfs(int i, int j) { // count island 
	a[i][j] = 0;
	for(int k = 0 ; k<4; k++) {
		int d1 = i + dx[k];
		int d2 = j + dy[k];
		if(d1>=0 && d1 <n && d2 >=0 && d2 < m && a[d1][d2] == 1) dfs(d1,d2);
	}
}

int main() { // count islands
			//4 5
			//1 1 0 0 1
			//1 1 0 0 1
			//0 0 0 1 1
			//1 0 1 1 1
			//
			//0 0 0 0 0
			//0 0 0 0 0
			//0 0 0 0 0
			//0 0 0 0 0
			//3
	cin >> n >> m;
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<m; j++) {
			cin >> a[i][j];
		}
	}
	int cnt=0;
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<m; j++) {
			if(a[i][j] == 1) {
				cnt++;
				dfs(i,j);
			}
		}
	}
	cout << endl;
	
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<m; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << cnt;
	return 0;
}
