#include <bits/stdc++.h>
using namespace std;

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
int a[500][500];

void dfs(int i, int j, int z, int t, int n, int m, bool &flag) {
	a[i][j] = 0;
	for(int k=0; k<4; k++) {
		int i1 = i + dx[k];
		int y1 = j + dy[k];
		if(i1>=0 && i1 <n && y1>=0 && y1<m && a[i1][y1] == 1) {
			if(i1==z && y1==t) {
				flag = true;
				return;
			}
			dfs(i1,y1,z,t,n,m,flag);
		}
	}
}

int main() { // tim duong di cua con chuot thong qua 4 o xung quanh
//		3 5
//		1 1 3 5
//		1 0 1 0 0
//		0 1 1 1 1
//		1 0 0 0 1
// => 0;0 => 2;4 => NO
	int n, m; cin >> n >> m;
	int b[4];
	for(int i = 0; i<4; i++) {
		cin >> b[i];
	}
	
	for(int i=0; i<n; i++) {
		for(int j = 0; j<m; j++) {
			cin >> a[i][j];
		}
	}
	
	int i = b[0] - 1;
	int j = b[1] - 1;
	
	int z = b[2] - 1;
	int t = b[3] - 1;
	bool flag = false;
	dfs(i,j,z,t,n,m,flag);
	
	if(flag) {
		cout << "yes";
	} else {
		cout << "no";
	}
	
	return 0;
}









