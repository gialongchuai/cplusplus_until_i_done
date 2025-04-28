#include <bits/stdc++.h>
using namespace std;

int main() {
	// cout so chinh phuong trong doan [a,b] thuoc 10^12 => 10^6
	long long a, b; cin >> a >> b;
	int i = sqrt(a);
	if(1ll * i * i < a) i++;
	for(; i*i <= b; i++) {
		cout << 1ll * i * i << " ";
	}
	return 0;
}
