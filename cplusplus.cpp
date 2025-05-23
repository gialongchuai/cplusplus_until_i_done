#include <bits/stdc++.h>
using namespace std;

long long binpow(long long a, long long b, long long c) {
	if(b==0) return 1; // tuc a^0 thi return 1 
	long long X = binpow(a, b/2, c); // behind chia do de toi 2^0 nhan de quy lai
	if(b%2==0) { // neu chan thi khong can * a vd : 2^100 = 2^50 * 2^50 
		return (X%c) *(X%c) % c;  // else 2^100 = 2^50 * 2^50 * 2 
	} else {
		return (X%c) *(X%c) % c * (a%c) % c;
	}
}

int main() { // binpow
	//luy thua voi so mu cuc lon a^b voi b cuc lon
	// luy thua nhi phan chia du cho c
	cout << binpow(2,1000000000, 10);
	
	return 0;
}









