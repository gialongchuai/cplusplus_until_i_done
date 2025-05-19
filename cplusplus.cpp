#include <bits/stdc++.h>
using namespace std;

int a[500];
int n, k;

void khoitao(){
	cin >> n >> k; // C 5 cua 9 : k=5 , n=9
	for(int i = 1; i <= k; i++) {
		a[i] = i;
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

int main() { // thuat toan sinh to hop tang dan
			//6 4
			//1 2 3 4
			//1 2 3 5
			//1 2 3 6
			//1 2 4 5
			//1 2 4 6
			//1 2 5 6
			//1 3 4 5
			//1 3 4 6
			//1 3 5 6
			//1 4 5 6
			//2 3 4 5
			//2 3 4 6
			//2 3 5 6
			//2 4 5 6
			//3 4 5 6
	khoitao();
	while(!check()) {
		for(int i = 1; i<=k; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
		sinh();
	}
	for(int i = 1; i <=k; i++) {
		cout << a[i] << " ";
	}

	return 0;
}









