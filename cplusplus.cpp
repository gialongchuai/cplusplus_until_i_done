#include<bits/stdc++.h>
using namespace std;

int a[1000][1000];

int main() { // ly thuyet do thi
			// chuyen doi do thi vo huong cua danh sach canh thanh danh sach ke
			// cout dinh ke tang dan`
			//5 4	// 5 dinh 4 canh
			//2 5
			//4 1
			//4 2
			//4 3
			//^Z
			//1 : 4 	.. canh 1 ke voi 4
			//2 : 4 5 	.. canh 2 ke voi 4 va` 5
			//3 : 4 	...
			//4 : 1 2 3	
			//5 : 2
	int dinh, canh; cin >> dinh >> canh;
	map<int,set<int>> m;
	for(int i=0; i<=canh; i++) {
		int x, y; cin >> x >> y;
		m[x].insert(y);
		m[y].insert(x);
	}
	for(pair<int,set<int>> x : m) {
		cout << x.first << " : ";
		for(int y : x.second) cout << y << " ";
		cout << endl;
	}
	
	return 0;
}













