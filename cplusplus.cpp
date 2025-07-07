#include <bits/stdc++.h>
using namespace std;

struct dscanh {
	int x, y, w;
};

int dinh, canh;
vector<int> ke[105];
int visited[105], parent[105], sz[105];
vector<dscanh> ds_canh;

bool cmp(dscanh a, dscanh b) {
	return a.w < b.w;
}

void nhap() {
	cin >> dinh >> canh;
	for(int i=1; i<=canh; i++) {
		int x, y, w; cin >> x >> y >> w;
		ds_canh.push_back({x,y,w}); // cau truc tu` x toi y voi trong so w
	}
	sort(ds_canh.begin(), ds_canh.end(), cmp); // sap xep lai cho w tang dan de tim cay khung voi trong so nho nhat
}

void init() {
	for(int i=1; i<=dinh; i++) {
		parent[i] = i;
		sz[i] = 1; // cho so cay con moi khi gop , ban dau` bang` 1 het
	}
}

int find(int u) {
	if(u != parent[u]) // trong luc tim` thang` cao nhat thi cat nhat nhung thang con cho thang` cha luon
		parent[u] = find(parent[u]);
	return parent[u]; // neu u == parent thi` return thang cha cao nhat
}

int find_02(int u) {
	while(u != parent[u]) {
		u = parent[u];
	}
	return u;
}

bool union_func(int v, int u) {
	int x = find(v); // tim thang cha cao nhat
	int y = find(u);
	if(x == y) return false; // da cung thuoc 1 thanh phan lien thong
	
	// gan cay nho hon vao cay lon hon
	if(sz[x] < sz[y]) { // bat dau` gop lan` 01 : mac dinh nhay? vao` else 
		parent[x] = y;
		sz[y] += sz[x];
	} else { // lay thang co cay con nho nhat cho no lam cha
		parent[y] = x;
		sz[x] += sz[y]; // tang so cay con cho thang cha
	}
	
	return true;
}

void kruskal() {
	vector<dscanh> kq;
	int tong_trong_so_min = 0;
	for(dscanh i : ds_canh) {
		if(tong_trong_so_min == dinh - 1) break; // neu tong_trong_so_min != dinh - 1 tuc la khong tao duoc cay khung
		if(union_func(i.x, i.y)) { // cay khung nhung khong dc tao thanh chu trinh`
			tong_trong_so_min+=i.w; // tuc la them canh vao cay khung nhung canh do khong duoc tao thanh chu trinh`
			kq.push_back(i);
		}
	}
	cout << tong_trong_so_min << endl;
	for(dscanh p : kq) {
		cout << p.x << " " << p.y << " " << p.w << endl;
	}
}

int main() {	// disjoint set union => kruskal : tim cay khung (duong di toi all dinh with w minest)
	nhap();
	init();
	cout << endl;
	for(dscanh i : ds_canh) {
		cout << i.x << " " << i.y << " " << i.w << endl;
	}
	kruskal();

    return 0;
}















