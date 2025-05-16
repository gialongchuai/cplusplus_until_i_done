#include <bits/stdc++.h>
using namespace std;

void sang(long long l, long long r) {
	int prime[r-l+1];
	for(long long i = 0; i<=r-l; i++){
		prime[i] = 1;
	}
	for(int i = 2; i*i<=r; i++) { // cong thuc tim boi dau tien lon hon l
		for(long long j = max(1ll * i*i,(l+i-1) / i * i); j<=r; j+=i) { 
			prime[j-l] = 0; // j-l
		}
	}
	for(long long i = max(2ll, l); i<=r ;i++) {
		if(prime[i-l] == 1) { // i - l
			cout << i << " ";
		}
	}
 	 
}

int main() { // sang so nguyen to tren doan a b cuc lon
	sang(10001000,10010000);
	
	return 0;
}









