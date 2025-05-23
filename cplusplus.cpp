#include <bits/stdc++.h>
using namespace std;

long long binpow(long long a, long long b) {
	if(b==0) return 1; // tuc a^0 thi return 1 
	long long X = binpow(a, b/2); // behind chia do de toi 2^0 nhan de quy lai
	if(b%2==0) { // neu chan thi khong can * a vd : 2^100 = 2^50 * 2^50 
		return X * X;  // else 2^100 = 2^50 * 2^50 * 2 
	} else {
		return X * X * a;
	}
}

int main() { // binpow
	//luy thua voi so mu cuc lon a^b voi b cuc lon
	cout << binpow(2,13);
	
	return 0;
}









