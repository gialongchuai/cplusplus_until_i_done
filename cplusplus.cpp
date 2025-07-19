#include <bits/stdc++.h>
using namespace std;

int a[500][500];
int d[500][500];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};
int n, m;
int dem;

void loang(int i, int j) {
    d[i][j]=1; // mang d luu quan` dao tung` la` so 1 khong tinh con` neu 0 loang duoc thi` tinh chu vi cho do
    a[i][j]=0;
    for(int k=0; k<4; k++) {
        int x = i+dx[k]; // x y ma` bang` 0 tuc +1 chu vi
        int y = j+dy[k];
        if(a[x][y] == 0 && d[x][y] != 1) {
            dem++;
        }
        if(x<=n && y<=m && a[x][y] == 1 && x>=1 && y>=1){ // chi loang so 1 de tim` 4 o xung quanh quan` dao
            loang(x,y);
        }
    }
}

int main() { // tinh chu vi cua cac quan dao xung quanh so 1
	
//		5 8
//	1 1 0 0 0 1 0 0
//	0 0 0 1 1 0 1 1
//	1 0 1 1 0 1 0 1
//	0 0 1 1 0 1 1 0
//	0 1 1 1 0 0 1 0
//	
//	0 0 0 0 0 0 0 0 0 0 
//	0 1 1 0 0 0 1 0 0 0 
//	0 0 0 0 1 1 0 1 1 0 
//	0 1 0 1 1 0 1 0 1 0 
//	0 0 0 1 1 0 1 1 0 0 
//	0 0 1 1 1 0 0 1 0 0 
//	0 0 0 0 0 0 0 0 0 0 

	//0 6 => quan` dao 1 chu vi 6 vd 
	//1 4				0 0 0 0
	//2 16				0 1 1 0 => co 6 so 0 tuc 1+1+1+1+1+1=6
	//3 8				0 0 0 0
	//4 4
	//5 10

    cin >> n >> m;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            cin >> a[i][j];
        }
    }
    vector<pair<int,int>> v;
    int ans = 0;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            dem = 0;
            if(a[i][j] == 1) {
                loang(i,j);
                v.push_back({ans,dem});
                ans++;
            }

        }
    }
    for(auto x : v) {
        cout << x.first << " " << x.second << endl;
    }

    return 0;
}

