#include <bits/stdc++.h>
using namespace std;

int main() {
	int a[5] = {3,1,5,7,9};
	int *ptr = a + 3;
	cout << ptr << endl; // 0x73fdec // ******
	cout << *ptr << endl; // 7
	for(int i = 0; i < 5; i++) {
		cout << a+i << " " << *(a+i) << endl;
	}
		//	0x73fde0 3
		//	0x73fde4 1
		//	0x73fde8 5
		//	0x73fdec 7 	// ******
		//	0x73fdf0 9
	
	return 0;
}









