#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef pair<int,pair<int,int>> iii; // {trong_so: {i;j}} de luu trong_so min va hang cot tai diem do'
int a[105][105];
int d[105][105];
int hang, cot;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

void nhap() {
	cin >> hang >> cot;
	for(int i=1; i<=hang; i++) {
		for(int j=1; j<=cot; j++) {
			cin >> a[i][j];
			d[i][j] = 1e9; // mac dinh luu max
		}
	} 
}

void dijkstra(int i, int j) {
	d[i][j] = a[i][j]; // diem bat dau` thi` bang trong so tai diem do trong ma tran
	
	// tao hang don tang dan trong so
	priority_queue<iii, vector<iii>, greater<iii>> q; // sap xem tang dan trong so de lay ra thang min trong_so trong hang doi ra truoc
	q.push({d[i][j], {i,j}});
	
	while(!q.empty()) {
		iii tmp = q.top(); q.pop();
		
		int trong_so = tmp.first, hang_x = tmp.second.first, cot_y = tmp.second.second;
		if(trong_so > d[hang_x][cot_y]) continue;
		
		for(int k=0; k<4; k++) { // do ma tran co the di dc 4 dinh xung quanh no
			int tmp_x = hang_x + dx[k], tmp_y = cot_y + dy[k];
			if(tmp_x >= 1 && tmp_x <= hang && tmp_y >= 1 && tmp_y <= cot) { // kiem tra tinh hop le
				if(d[tmp_x][tmp_y] > trong_so + a[tmp_x][tmp_y]) { // trong so vo cuc > trong so cac dinh cu + trong so trong mang
					d[tmp_x][tmp_y] = trong_so + a[tmp_x][tmp_y]; // sure => update
					q.push({d[tmp_x][tmp_y], {tmp_x, tmp_y}}); // them vao` hang` doi de xu ly tiep
				}
			}
		}
	}
	cout << d[hang][cot];
}

int main() {	// duong di trong ma tran tu` 1:1 toi hang:cot max voi minest road
	nhap();
	dijkstra(1,1); // toi hang max : cot max
	
	//6 7
	//0 3 6 0 5 9 1
	//6 5 4 4 0 7 6
	//4 0 2 1 5 6 1
	//2 7 7 3 3 1 6
	//4 4 9 6 9 7 2
	//3 6 4 4 1 9 2
	//28				// ton 28 duong di tu` 11 toi 67 di them 4 o xung quanh
	
	
	return 0;
}














