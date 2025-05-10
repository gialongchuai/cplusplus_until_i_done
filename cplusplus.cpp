#include <bits/stdc++.h>
using namespace std;

int main() { // 81212112312312312331823239
			// 5
			// => 4
			// chi du 1 so cuc lon cho 1 so <= long long
	string s;
	cin >> s;
	long long m; cin >> m;
	long long r = 0;
	for(char x : s) {
		r = r*10+(x-'0');
		r%=m;
	}
	cout << r;
	
	return 0;
}






