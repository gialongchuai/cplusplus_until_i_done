#include <bits/stdc++.h>
using namespace std;

int main() { // bai toan con soc nhay trong mang (i+1 or i+2)
			//9
			//3 7 2 4 8 1 1  5  5
			//0 4 1 3 7 6 6 10 10 : mang F chi luu duong di ngan nhat
			//10 : smallest distance
	int n; cin >> n;
	int a[n];
	for(int i = 0; i <n; i++) {
		cin >> a[i];
	}
	int F[n];
	F[0] = 0;
	F[1] = abs(a[1] - a[0]);
	for(int i=2; i<n; i++) {
		int f_1 = F[i-1] + abs(a[i] - a[i-1]); // duong di cu + chi phi hien tai toi vi tri xet
		int f_2 = F[i-2] + abs(a[i] - a[i-2]); // duong di cu + chi phi hien tai toi vi tri xet
		F[i] = min(f_1, f_2); // chap nhan chi duong di ngan nhat
	}
	for(int x : F) {
		cout << x << " ";
	}
	cout << endl << F[n-1];
	
 	return 0;
}










