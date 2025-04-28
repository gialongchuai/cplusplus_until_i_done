#include <bits/stdc++.h>
using namespace std;

void tsnt_cach01(int n) {
	int i = 2;
	while(i*i<=n) {
		while(n%i==0) {
			cout << i << " ";
			n/=i;
		}
		i++;
	}
	if(n!=1) {
		cout << n;
	}
}

void tsnt_cach02(int n) {
	for(int i = 2; i*i <= n; i++) {
		while(n%i==0) {
			cout << i << " ";
			n/=i;
		}
	}
	if(n!=1) {
		cout << n;
	}
}

int main() {
	// phan tan tich thua so nguyen to : 60 = 2 2 3 5
	int n; cin >> n;
	
	tsnt_cach01(n);
	
	cout << endl;
	// bp
	tsnt_cach02(n);
	
	return 0;
}
