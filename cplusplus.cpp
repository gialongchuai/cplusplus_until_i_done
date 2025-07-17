#include <bits/stdc++.h>
using namespace std;

int a[500];

int main() { // day con dai` nhat co tong = 0;
	//8
	//-2 2 -8 1 7 -10 10 23
	//7 => -2 2 -8 1 7 -10 10
	
	//9
	//15 -2 2 -8 1 7 -10 10 23
	//7 => -2 2 -8 1 7 -10 10
	
	//10
	//15 -2 2 -8 1 7 -10 10 0 23
	//8
	int n; cin >> n;
	for(int i=1; i<=n; i++) {
		cin >> a[i];
	}
	
	int sum = 0;
	int len = 0;
	map<int,int> m;
	for(int i=1; i<=n; i++) {
		sum+=a[i];
		
		// tong tat ca phan tu den day = 0 tuc la i phan tu == 0 do luu i begin 1
		if(sum == 0) {
			len=i;
		}
		
		if(m.find(sum) != m.end()) { // neu da xuat hien tong giong truoc do
			len = max(len, i-m[sum]); // thi` chi so hien tai - chi so tong xuat hien truoc do bang do dai` sau s == 0				
		} else {
			m[sum] = i; // luu tong xuat hien tai chi so thu i
		}
	}
	cout << len << endl;
	
	return 0;
}






















