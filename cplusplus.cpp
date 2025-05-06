#include <bits/stdc++.h>
using namespace std;

int main() {
	int n = 100;
	cout << &n << endl; // 0x73fe1c
	int *ptr = &n;
	cout << ptr << endl; // 0x73fe1c
	cout << &ptr << endl; // 0x73fe10
	cout << *ptr << endl; // 100
	int **ptr1 = &ptr;
	cout << ptr1 << endl; // 0x73fe10
	cout << &ptr1 << endl; // 0x73fe08
	cout << *ptr1 << endl; // 0x73fe1c
	cout << **ptr1 << endl; // 100
	return 0;
}









