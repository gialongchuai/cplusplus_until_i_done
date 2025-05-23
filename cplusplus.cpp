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
	int i = n-1; // bat dau voi n-1 de den duoc voi so dau tien nho hon thang a[i]
	while(i>=1 && a[i] > a[i+1]) {
		i--;
	}
	if(i == 0) {
		final = 0;
	} {
		int j = n;
		while(a[i] > a[j]) j--; // di den thang` lon hon no la dung ngay
		swap(a[i], a[j]); // doi cho xong sap xep day sau tang dan
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
			//4
			//1234
			//1243
			//1324
			//1342
			//1423
			//1432
			//2134
			//2143
			//2314
			//2341
			//2413
			//2431
			//3124
			//3142
			//3214
			//3241
			//3412
			//3421
			//4123
			//4132
			//4213
			//4231
			//4312
			//4321
	return 0;
}









