#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> v = {1,3,5,7,9};
	vector<int>::iterator it = v.begin();
	cout << *it << endl; // 1
	int a[5] = {2,4,6,8,10};
	for(int i = 0; i<5; i++) {
		cout << a+i << " "; // 0x73fdb0 0x73fdb4 0x73fdb8 0x73fdbc 0x73fdc0
	}
	cout << endl;
	cout << a << endl; // 0x73fdb0
	cout << *a << endl; // 2
	int *ptr = lower_bound(a,a+5,7);
	cout << ptr << endl; // 0x73fdbc
	cout << *ptr << " " << ptr - a; // 8 3
	
	cout << endl;
	vector<int>::iterator it_01 = lower_bound(v.begin(), v.end(), 6);
	cout << *it_01 << " " << it_01 - v.begin(); // 7 3
	
	return 0;
}









