#include <bits/stdc++.h>
using namespace std;

int tong(int n) {
	int sum = 0;
	while(n) {
		sum+=n%10;
		n/=10;
	}
	return sum;
}

bool cmp(int x, int y) {
	int sum_x = tong(x);
	int sum_y = tong(y);
	if(sum_x != sum_y) {
		return sum_x < sum_y;
	}
	return x < y;
}

int main() { // sort : tang dan theo tong cua cac chu so
			// bang nhau so nho dung truoc
		//	8
		//		100001 2 30002 5 303003 212 83 11
		// ->	2 11 100001 5 212 30002 303003 83
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









