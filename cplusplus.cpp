#include <bits/stdc++.h>
using namespace std;

int dinh, canh;
//vector<int> ke[105];
int visited[105], parent[105];

void init() {
	for(int i=1; i<=dinh; i++) {
		parent[i] = i;
	}
}

int find(int u) {
	while(u != parent[u]) {
		u = parent[u];
	}
	return u;
}

bool union_func(int v, int u) {
	int x = find(v);
	int y = find(u);
	if(x == y) return false; // da cung thuoc 1 thanh phan lien thong
	
	if(x < y) parent[y] = x; // lay so nho hon lam dai dien
	else parent[x] = y;
	
	return true;
}

int main() {	// disjoint set union
	// dem so thanh phan lien thong do thi
	// kiem tra do thi vo huong co chu trinh
	cin >> dinh >> canh;
	init();
	int cnt = dinh; // so thanh phan lien thong lon nhat co the dat duoc
	for(int i=1; i<=canh; i++) {
		int x, y; cin >> x >> y;
		if(union_func(x,y)) { // neu co the gop 2 canh thi` - 1 thanh phan lien thong
			cnt--;
		}
	}
	cout << cnt << endl;

    return 0;
}















