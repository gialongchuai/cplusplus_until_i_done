#include <bits/stdc++.h>
using namespace std;

int a[500];
int n, k;

void khoitao(){
	cin >> n >> k; // C 5 cua 9 : k=5 , n=9
	for(int i = 1; i <= k; i++) {
		cin >> a[i];
	}
}

void sinh() {
	int i = k;
	while(i>=1 && a[i]==n-k+i) {
		i--; // tim phan tu dau tien chua dat gia tri max tinh tu ben phai
	}
	a[i] += 1;	
	int ans = 1; // 3 5 6 => 4 5 6
	for(int j = i + 1; j<=k; j++) {
		a[j] = a[i] + ans;
		ans++;
	}
}

bool check() { // kiem tra co dat gia tri cuoi 5 6 7 8 9
	for(int i = 1; i<=k ; i++) {
		if((n-k+i) != a[i]) return false;
	}
	return true;
}

int main() { // 
	khoitao();
	if(check()) {
		for(int i = 1; i<=k; i++) {
			cout << i << " ";
		}
	} else {
		sinh();
		for(int i = 1; i<=k ;i++) {
			cout << a[i] << " ";
		}
	}

	return 0;
}









