#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b){
	string x = a+b;
	string y = b+a;
	return x>y;
}

int main() {
		// tinh tong cac chu so trong so cuc lon
		// 81212112312312312331823239
		// => 70
	string s; cin >> s;
	int sum = 0;
	for(char x : s) {
		sum+=x-'0';
	}
	cout << sum;

	return 0;
}






