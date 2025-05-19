#include <bits/stdc++.h>
using namespace std;

int a[1000];
int n;

void khoitao() {
	cin >> n;
	for(int i = 1; i<=n; i++) {
		a[i] = 0;
	}
}

bool check() {
	for(int i = 1 ; i<=n; i++) {
		if(a[i] == 0) return false;
	}
	return true;
}

void sinh() {
	int i = n; 
	while(i>=1 && a[i] == 1) {
		a[i] = 0;
		i--;
	}
	a[i] = 1;
}

int main() { // thuat toan sinh nhi phan
	khoitao();
	while(!check()) {
		for(int i = 1 ; i<=n; i++) {
			cout << a[i] ;
		}
		cout << endl;
		sinh();
	}
	for(int i = 1 ; i<=n; i++) {
		cout << a[i] ;
	}

	return 0;
}









