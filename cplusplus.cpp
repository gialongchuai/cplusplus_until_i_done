#include <bits/stdc++.h>
using namespace std;

int main() {
	// 1, 5, 10, 20, 100
	// 1859
	int n; cin >> n;
	
	int r = n / 100;
	cout << "100 : " << r << endl;
	n %= 100;
	
	int l = n / 20;
	cout << "20 : " << l << endl;
	n %= 20;
	
	int f = n / 10;
	cout << "10 : " << f << endl;
	n %= 10;
	
	int i = n / 5;
	cout << "5 : " << i << endl;
	n %= 5;
	
	int h = n / 1;
	cout << "1 : " << h << endl;
	return 0;
}
