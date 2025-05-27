#include <bits/stdc++.h>
using namespace std;

long long mod = 1e9 + 7;

struct matran{
	long long a[2][2];
	friend matran operator * (matran x, matran y) {
		matran kq;
		for(int i = 0; i<2; i++) {
			for(int j = 0; j<2; j++) {
				kq.a[i][j] = 0;
				for(int k = 0; k <2; k++) {
					kq.a[i][j] += (x.a[i][k]*y.a[k][j]);
					kq.a[i][j] %= mod; // vuot qua mod moi bat dau chia du 
				}
			}	
		}
		return kq;
	}
};

matran binpow(matran x, long long n) { // luy thua nhi phan => luy thua ma tran
	if(n==1) return x;
	matran X = binpow(x, n/2);
	if(n%2==0) {
		return X * X;
	} else {
		return X * X * x;
	}
}

int main() {
	matran x;
	x.a[0][0] = 1;
	x.a[0][1] = 1;
	x.a[1][0] = 1;
	x.a[1][1] = 0;
	
	matran y;
	y.a[0][0] = 1;
	y.a[0][1] = 1;
	y.a[1][0] = 1;
	y.a[1][1] = 0;
	for(int i = 1; i <=10; i++) {
		x=x*y;
	}
	cout << x.a[0][1] << endl; // cout 89
	
	matran tmp = binpow(y, 11); // khong truyen x do x da bi thay doi
	cout << tmp.a[0][1]; // cout 89
	
	return 0;
}










