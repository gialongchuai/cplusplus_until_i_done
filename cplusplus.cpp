#include <bits/stdc++.h>
using namespace std;

int main() { // tim diem cuc dai co 
			// 8 phan tu xung quanh nho hon chinh no
	int n, m; cin >> n >> m;
	int a[n][m];
	for(int i = 0; i <n; i++) {
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	
	int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
	int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
	int cnt = 0;
	for(int i = 0; i <n; i++) {
		for(int j =0; j<m; j++) {
			bool flag = true;
			for(int k = 0; k<8; k++) {
				int i1 = i + dx[k];
				int y1 = j + dy[k];
				if(i1>=0 && i1<n && y1>=0 && y1<m && a[i][j] <= a[i1][y1]) {
					flag = false;
				}
			}
			if(flag) {
				cnt++;
				cout << a[i][j] << " ";
			}
		}
		cout << endl;
	}
	cout << cnt;
	
	return 0;
}









