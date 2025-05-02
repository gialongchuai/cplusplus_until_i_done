#include <bits/stdc++.h>
using namespace std;

bool prime(int n) {
	if (n<2) return false;
	for(int i = 2; i*i <= n; i++) {
		if(n%i==0) return false;
	}
	return true;
}

vector<int> prime_list(vector<int> v) {
	vector<int> res;
	for(int x:v) {
		if(prime(x)) res.push_back(x);
	}
	return res;
}

void in(vector<int> v) {
	for(int x : v) {
		cout << x << " ";
	}
}

void nhap(vector<int> &v) {
	int n; cin >> n;
	for(int i = 0; i<n; i++) {
		int c; cin >> c;
		v.push_back(c);
	}
}

int main() { // vector basic
	vector<int> v;
	nhap(v);
	vector<int> res = prime_list(v);
	in(res);
}









