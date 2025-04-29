#include <bits/stdc++.h>
using namespace std;

int main() { // count lon hon, nho hon x
	int n; cin >> n;
	int a[n];
	for(int i = 0; i<n; i++) {
		cin >> a[i];
	}
	int x; cin >> x;
	int s_x = 0, l_x = 0;
	for(int i : a) {
		if(i < x) s_x++;
		if(i > x) l_x++;
	}
	
	cout << s_x << " " << l_x;
	return 0;
}









