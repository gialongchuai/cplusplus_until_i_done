#include <bits/stdc++.h>
using namespace std;

int a[100];
int n, final = 1;


void khoitao() {
	cin >> n;
	for(int i = 1; i <=n; i++) {
		a[i] = i;
	}
}

void sinh() {
	int i = n-1; 
	while(i>=1 && a[i] > a[i+1]) {
		i--;
	}
	if(i == 0) {
		final = 0;
	} {
		int j = n;
		while(a[i] > a[j]) j--;
		swap(a[i], a[j]);
		sort(a+i+1, a+n+1);
	}
}

int main() { // thuat toan sinh hoan vi
	khoitao();
	while(final) {
		for(int i = 1; i<=n; i++) {
			cout << a[i];
		}
		cout << endl;
		sinh();
	}

	return 0;
}









