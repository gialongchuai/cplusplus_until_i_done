#include <bits/stdc++.h>
using namespace std;

char a[100][100];
int n, m;
int used[100][100];
bool check = false;
string s;

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

void Try(int i, int j, int pos) {
	if(s.size() == pos) { // da di duoc den s tuc pos = size of s
		check = true;
		return;
	}
	for(int k = 0; k<4; k++) {
		int x = i + dx[k];
		int y = j + dy[k]; // pos da tinh tu chu cai xung neu giong thi try chu cai tiep theo of s
		if(x <= n && x>=1 && y>=1 && y <= m && used[x][y] == 0 && a[x][y] == s[pos]) {
			used[x][y] = 1; // khong tinh di lai
			Try(x,y,pos+1); // ki tu tiep theo trong s
			used[x][y] = 0; // tra de di cai khac
		}
	}
}

int main() { // chu cai bat ki trong ma tran tao thanh` chuoi S 
			//khong tinh tai vi tri bat dau
	cin >> n >> m;
	for(int i= 1; i<=n; i++) {
		for(int j = 1; j<=m; j++) {
			cin >> a[i][j];
		}
	}
	cin >> s;
	
	for(int i= 1; i<=n; i++) { // 1
		for(int j = 1; j<=m; j++) { // 2+1: xet tung chu cai trong ma tran
			if(a[i][j] == s[0]) {
				used[i][j] = 1; // khong cho di lai
				Try(i,j,1); // di tiep chu cai thu 2 cua xau s
				used[i][j] = 0; // tra lai
			}
		}
	}
	if(check) {
		cout << "Yes";
	} else {
		cout << "No";
	}
	
	
	return 0;
}












