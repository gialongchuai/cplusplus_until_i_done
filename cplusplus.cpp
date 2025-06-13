#include<bits/stdc++.h>
using namespace std;

int a[1000][1000];

int main() { // ly thuyet do thi
			// chuyen doi do thi vo huong cua danh sach canh thanh ma tran ke
			//5 4	 // 5 dinh 4 canh
			//4 3
			//3 1
			//4 2
			//5 4
			//
			//0 0 1 0 0
			//0 0 0 1 0
			//1 0 0 1 0
			//0 1 1 0 1
			//0 0 0 1 0
	int dinh, canh; cin >> dinh >> canh;
	for(int i=0; i<canh; i++) {
		int from, to; cin >> from >> to;
		a[from][to] = 1;
		a[to][from] = 1;
	}
	for(int i=1; i<=dinh; i++) {
		for(int j=1; j<=dinh; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}













