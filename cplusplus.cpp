#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n; // bai toan dong du (a+b) % c = (a%c+b%c) %c
	int a = 1e9 + 7;
	long long c;
	long long sum = 0;
	for(int i = 0; i<n; i ++) {
		cin >> c;
		sum+= c%a;
	}
	cout << sum%a;
	return 0;
}









