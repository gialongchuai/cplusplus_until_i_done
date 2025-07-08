#include <bits/stdc++.h>
using namespace std;

int dinh, canh;
vector<pair<int,int>> ke[105];
int d[105]; // d de luu trong so duong di ngan nhat xuat phat tu s

void nhap() {
	cin >> dinh >> canh;
	for(int i=1; i<=canh; i++) {
		int x, y, w; cin >> x >> y >> w;
		ke[x].push_back({y,w}); // do thi co huong nen khong push nguoc // neu vo huong thi push nguoc
	}
}

void dijkstra(int s) { // bat dau voi dinh dau tien
	for(int i=1; i<=dinh; i++) {
		d[i] = 1e9; // cho tat ca tai cac dinh co duong di MAX
	}
	// do bat dau` tu` s nen tai s chua di thi` set = 0
	d[s] = 0;
	
	// tao hang doi de luu cac {trong_so, dinh} va sort trong_so tang dan de lay duong di min di truoc
	priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q;
	
	// day diem bat dau vao hang` doi sau do tim cac dinh ke voi dinh bat dau`
	q.push({0,s}); // {trong_so,dinh}
	while(!q.empty()) {
		pair<int,int> tmp = q.top(); q.pop();
		int dis = tmp.first, u = tmp.second; // trong_so ; dinh
		
		// 0 > 0 => no nen bo qua if nay` lan` dau`
		if(dis > d[u]) continue; // neu trong_so > trong_so cu thi` di tiep; 
						// tuc la lay hang doi ra xet neu xet lai dinh di roi` ma` dis lon hon thi khong tinh duogn di do
		// neu nho hon xet cac dinh ke tuc la` tinh` duong` di tu` dinh do'
		for(pair<int,int> v : ke[u]) { // 1: {2,1} {3,5} voi 2 3 la` dinh` con` 3 5 la trong_so
			int x = v.first, y = v.second; // x: dinh , y: trong so
			
			// neu khoang canh tai dinh ke` lon hon tuc la xet vo cuc > khoang canh dinh cu + do dai` toi dinh hien tai thi` update
			if(d[x] > d[u] + y) {
				d[x] = d[u] + y;
				q.push({d[x], x});
			}
		}
		
	}
}

int main() {	// disjoint set union => kruskal : tim cay khung (duong di toi all dinh with w minest)
	nhap();
	dijkstra(1);
	
	for(int i=1; i<=dinh; i++) {
		cout << d[i] << " ";
	}
	//6 9 		// 6 dinh voi 9 canh duong di co huong kem` trong so
	//1 2 1
	//1 3 5
	//2 5 1
	//2 3 2
	//2 4 3
	//3 4 2
	//4 5 4
	//4 6 12
	//5 6 7
	//0 1 3 4 2 9 		// duong di ngan nhat toi cac dinh con` lai khi xuat phat tu` dinh so 1
	return 0;
}















