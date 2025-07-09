#include <bits/stdc++.h>
using namespace std;

struct edge {
	int x, y, w;
};

vector<edge> edges;
int dinh, canh, src;
int d[105];

void nhap() {
	cin >> dinh >> canh >> src;
	for(int i=1; i<=canh; i++) {
		int x, y, w; cin >> x >> y >> w;
		edges.push_back({x,y,w});
	}
}

void bellman_ford(int s) {
	for(int i=1; i<=dinh; i++) { // danh dau tat cac duong di max het
		d[i] = 1e9;
	}
	
	d[s] = 0; // cho dinh nguon bang `0 de bat dau` di
	for(int i=1; i<=dinh-1; i++) { // duyet voi so lan dinh-1 cho thuat toan
	// voi moi lan` duyet thi` duyet qua tat ca cac canh de update
		for(edge e : edges) {
			int u = e.x, v = e.y, trong_so = e.w;
			if(d[u] != 1e9 && d[v] > d[u] + trong_so) { // kiem tra dinh cu da duoc update roi` && duong di den
				d[v] = d[u] + trong_so; // dinh moi hon co duong nho hon thi` update 
			}
		}
	}// het tat ca dinh-1 thi` tu dong moi dinh se co duong di nho nhat ;))
	for(int i=1; i<=dinh; i++) {
		cout << d[i] << " ";
	}
}

int main() {	// thuat toan bellman_ford :
	nhap();
	bellman_ford(src);
	
	//5 8 1 			// gom 5 dinh va 8 canh ke co huong tim` dinh` xuat phat (nguon) la` 1
	//1 2 -1
	//1 3 4
	//2 3 3
	//2 4 2
	//2 5 2
	//4 3 5
	//4 2 1
	//5 4 -3
	//0 -1 2 -2 1 		// 1 toi cac dinh con 
	
	//1: 0          // chính nó
	//2: -1         // 1 -> 2
	//3: 2          // 1 -> 2 -> 3
	//4: -2         // 1 -> 2 -> 5 -> 4 
	//5: 1          // 1 -> 2 -> 5
	
	
	return 0;
}














