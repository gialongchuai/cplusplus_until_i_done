#include <bits/stdc++.h>
using namespace std;

int main() {
	// fibonacci : 0 1 1 2 3 5 8 ...
	long long t = 0, s = 1;
	cout << t << " " << s << " ";
	long long temp;
	for(int i = 2; i<=92; i++) {
		cout << t + s << " ";
		temp = t;
		t = s;
		s += temp; // fibo = t + s => s = fibo
	}
	
	return 0;
}
