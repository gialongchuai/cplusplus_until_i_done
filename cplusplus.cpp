#include<bits/stdc++.h>
using namespace std;

vector<int> ke[1005];

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
	for(int i=0; i<canh; i++) {
		int x, y; cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	
	for(int i=1; i<=dinh; i++) {
		cout << i << " : ";
		vector<int> x = ke[i];
		sort(x.begin(), x.end());
		for(int y : x) {
			cout << y << " ";
		}
		cout << endl;
	}
	
	return 0;
}













