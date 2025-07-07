#include <bits/stdc++.h>
using namespace std;

int dinh, canh;
vector<int> ke[105];
int visited[105], parent[105], sz[105];

//void nhap() {
//	cin >> dinh >> canh;
//	for(int i=1; i<=canh; i++) {
//		
//	}
//}

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
	
	if(sz[x] < sz[y]) { // bat dau` gop lan` 01 : mac dinh nhay? vao` else 
		parent[y] = x;
		sz[x] += sz[y];
	} else { // lay thang co cay con nho nhat cho no lam cha
		parent[x] = y;
		sz[y] += sz[x]; // tang so cay con cho thang cha
	}
	
	return true;
}

int main() {	// disjoint set union
	// dem so thanh phan lien thong do thi
	// kiem tra do thi vo huong co chu trinh
	
	//	7 6
	//1 2
	//Gop dc: dai dien 1: 2
	// dai dien 2: 2
	//2 3
	//Gop dc: dai dien 1: 3
	// dai dien 2: 3
	//5 3
	//Gop dc: dai dien 1: 5
	// dai dien 2: 5
	//4 6
	//Gop dc: dai dien 1: 6
	// dai dien 2: 6
	//6 7
	//Gop dc: dai dien 1: 7
	// dai dien 2: 7
	//5 4
	//Gop dc: dai dien 1: 7
	// dai dien 2: 7
	cin >> dinh >> canh;
	init();
	for(int i=1; i<=canh; i++) {
		int x, y; cin >> x >> y;
		if(union_func(x,y)) {
			cout << "Gop dc: ";
			cout << "dai dien 1: " << find_02(x) << endl << " dai dien 2: " << find_02(y) << endl;
		} else {
			cout << endl << "Khong dc" << endl;
		}
	}
	
    return 0;
}















