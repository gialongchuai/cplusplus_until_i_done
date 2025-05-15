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

int main() { // 1 so co dung 3 uoc, binh phuong so nguyen to tuc la 1 uoc 1 chinh no va snt vua ^2
	//	int n, x; cin >> n;
			//  duoi 10
			//4 9 25 49
	sang();
	for(int i = 0; i*i<= 100; i++) {
		if(prime[i] == 1) {
			cout << i*i << " ";
		}
	}
	
	return 0;
}









