#include <bits/stdc++.h>
using namespace std;

int main() { // cout list 92 numbers fibonacci
	long long fibo[100];
	fibo[0] = 0, fibo[1] = 1;
	
	for(int i = 2; i<=92; i++) {
		fibo[i] = fibo[i-2] + fibo[i-1];
	}
	
	for(int i = 0; i<=92; i++) {
		cout << fibo[i] << " ";
	}
		
	return 0;
}









