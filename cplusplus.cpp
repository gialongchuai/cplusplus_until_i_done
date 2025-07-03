#include<bits/stdc++.h>
using namespace std;

set<int> ke[105];
int dinh, canh;
vector<pair<int,int>> ds_canh;
int visited[105];
int cnt = 0;

void nhap() {
	cin >> dinh >> canh;
	for(int i=1; i<=canh; i++) {
		int x, y; cin >> x >> y;
		ke[x].insert(y); // chuyen thanh set de xiu' xoa cho de~
		ke[y].insert(x);
		ds_canh.push_back({x,y}); // them canh ke, xoa duyet xoa tung canh 
	}
	
	// do luu voi set roi` nen tu dong sap xep cach dinh ke cua dinh co trong mang? set'
}

void DFS(int u) {
	visited[u] = 1;
	for(int x : ke[u]) {
		if(!visited[x]) {
			DFS(x);
		}
	}
}

int main() { // canh cau: tuc la` loai bo no lam` tang thanh` phan` lien thong do thi
			// xoa no khoi danh sach ke nhung khong loai bo 2 dinh cua canh do
	nhap();
	
	// b1: dem thanh phan lien thong ban dau cua do thi
	for(int i=1; i<=dinh; i++) {
		if(!visited[i]) {
			DFS(i);
			cnt++;
		}
	}
	
	// b2: xoa tung` canh sau do so sanh thanh phan lien thong
	int canh_cau = 0;
	for(pair<int,int> x : ds_canh) {
		int s = x.first, t = x.second;
		memset(visited, 0, sizeof(visited)); // reset cho ve` 0 de thuc hien lan luot cac canh
		
		// neu la` dinh cau` thi` visited de khong di
		// con` cai nay` co the xoa de khong xet no luon
		ke[s].erase(t); ke[t].erase(s);
		int dem = 0; // sau khi xoa thuc hien dem tplt
		for(int i=1; i<=dinh; i++) {
			if(!visited[i]) {
				dem++;
				DFS(i);
			}
		}
		if(dem > cnt) {
			cout << s << ":" << t << " ";
			canh_cau++; 
		}
		ke[s].insert(t); ke[t].insert(s); // xoa roi` thi` insert lai xiu canh khac chien' tiep'
 	}
 	cout << endl << canh_cau;

	//10 8 		// 10 dinh voi 8 canh ke cho do thi vo huong
	//10 9
	//10 8
	//10 3
	//10 4
	//5 3
	//10 1
	//5 1
	//5 4
	//10:9 10:8 		// khi xoa canh ke nay` tang tplt
	//2					// cout 2 canh

	return 0;
}







