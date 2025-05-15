#include<bits/stdc++.h>
using namespace std;

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int n;
int a[500][500];

int tong_cong_don(int i,int j){
	int tong = a[i][j];
	for(int k = 0; k<8; k++) {
		int di = i+dx[k];
		int dj = j+dy[k];
		tong+=a[di][dj];
	}
//	a[i][j] = tong;
	return tong;
}

int main() { // ma tran vuong, tim ma tran 3x3 co tong lon nhat
			//6
			//4 6 4 5 8 2
			//8 0 9 0 1 4
			//3 5 3 6 3 4
			//5 7 0 9 5 9
			//4 5 5 9 6 3
			//9 2 3 6 1 8
			//
			//42 38 39 33 40 39 36 41 37 49 46 54 40 46 44 56
			//
			//4 6 4 5 8 2
			//8 0 9 0 1 4
			//3 5 3 6 3 4
			//5 7 0 9 5 9
			//4 5 5 9 6 3
			//9 2 3 6 1 8
			// => 56
	cin >> n;
	for(int i = 0; i <n; i++) {
		for(int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	
	cout << endl;
	int max_val = a[1][1];
	for(int i = 1; i <n -1; i++) {
		for(int j = 1; j < n-1; j++) {
			int tong = tong_cong_don(i,j);
			cout << tong << " ";
			if(tong > max_val) max_val = tong;
		}
	}
	cout << endl << endl;
	for(int i = 0; i <n; i++) {
		for(int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << max_val;
	return 0;
}
