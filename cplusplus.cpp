#include <bits/stdc++.h>
using namespace std;

int main() {
		// cout so lon nhat co m chu so ma tong bang` s
		//	4 23
		// => 9950
		// 5 0
		// => NOT FOUND
	int m, s; cin >> m >> s;
	if(s > 9*m || (m>1 && s == 0)) {
		cout << "NOT FOUND";
		return 0;
	} else {
		int t = s;
		int a[m], b[m];
		for(int i = 0; i <m;i++) {
			if(s>=9) {
				a[i] = 9;
				s-=9;
			} else {
				a[i] = s;
				s-=s; // s=0 do' ;)))) hoc qua' 180ph 
			}
		}
		t--;
		for(int i = m-1; i > 0; i--) { // khong xu ly chu so cuoi cung
			if(t>=9) { // cong voi t vi du 9-1=8 thi xuong dong
				b[i] = 9; // 37 cung da + 1 nen thanh` 9 yen tam
				t-=9;
			} else {
				b[i] = t;
				t = 0;
			}
		}
		
		b[0] = t + 1;
		for(int x : a) {
			cout << x;
		}
		cout << endl;
		for(int x : b) {
			cout << x;
		}
	}

	return 0;
}






