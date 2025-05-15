#include <bits/stdc++.h>
using namespace std;

int prime[1000001];

void sang() {
	for(int i = 0; i <= 1000000; i++) {
		prime[i] = 1;
	}
	
	prime[0] = 0;
	prime[1] = 0;
	for(int i = 2 ; i*i <= 1000000; i++) { // check xem i bi danh dau la hop so chua moi tiep tuc loai bo
		if(prime[i] == 1) { 			// boi cua i (tuc loai bo i*i) 
			for(int j = i*i; j <= 1000000; j+=i) {
			prime[j] = 0;
			}
		}
		
	}
}

int main() { // sang so nguyen to
	int n, x; cin >> n;
	sang();
	bool tmp = true;
	while(n--) {
		cin >> x;
		if(prime[x] == 0) {
			tmp = false;
		}
	}
	if(tmp) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	cout << endl;
	for(int i = 0; i<=1000; i++) {
		if(prime[i] == 1) cout << i << " ";
	}
	
	return 0;
}









