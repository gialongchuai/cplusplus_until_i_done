#include <bits/stdc++.h>
using namespace std;

int main() { // so phan tu chan, le; tong phan tu chan, le
			//5
			// 301 201 302 18 9
			// => {2 320
			// 	   3 511}
	int n; cin >> n;
	int a[n];
	for(int i = 0; i<n; i++) {
		cin >> a[i];
	}
	
	int dem_l = 0, dem_c = 0;
	int tong_l = 0, tong_c = 0;
	
	for(int i = 0; i<n; i++) {
		if(a[i]%2==0){
			tong_c+= a[i];
			++dem_c;
		} else {
			tong_l+= a[i];
			++dem_l;
		}
	}
	
	cout << dem_c << " " << tong_c << endl;
	cout << dem_l << " " << tong_l << endl;
	
	return 0;
}









