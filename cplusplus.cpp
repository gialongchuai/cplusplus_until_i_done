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
	return tong(x) < tong(y);
}

int main() { // stable sort : merge sort (do on dinh con so)
			// sap xep theo tong chu so tang dan
			// neu bang nhau giu nguyen vi tri xuat hien == so nao truoc xep truoc
			// => dung stable sort
	int n, x; cin >> n;
	int a[n];
	for(int i = 0; i <n; i++) {
		cin >> a[i];
	}
	stable_sort(a,a+n,cmp);
	for(int x : a) {
		cout << x << " ";
	}
	
	return 0;
}









