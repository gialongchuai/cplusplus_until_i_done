#include <bits/stdc++.h>
using namespace std;

int cnt(int n) {
	if(n==0) return 1; // 1 so 0 tinh' 1 khong vao duoc while 
	int count = 0;
	int tmp;
	while(n) {
		tmp=n%10;
		if(tmp == 0 || tmp == 6 || tmp == 8) count++;
		n/=10;
	}
	return count;
}

bool cmp(int x, int y) {
	int cnt_x = cnt(x);
	int cnt_y = cnt(y);
	if(cnt_x != cnt_y) {
		return cnt_x > cnt_y;
	}
	return x < y;
}

int main() { // sort : dem 0 6 8 xuat hien nhieu nhat
			// trung in so nho toi lon
	int n, x; cin >> n;
	int a[n];
	for(int i = 0; i <n; i++) {
		cin >> a[i];
	}
	sort(a,a+n,cmp);
	for(int x : a) {
		cout << x << " ";
	}
	
	return 0;
}









