#include <bits/stdc++.h>
using namespace std;

int main() {
	//9 4
	//1 2 2 2 3 5 6 7 8 8 => 22 22 22 => 3
	
//	9 9
//	1 2 2 2 3 5 6 7 8 8 =>  5
	//18 18
	//27 27
	//36

	int n, k; cin >> n >> k;
	int a[n];
	for(int &i : a) cin >> i;
	int l=0, r=n-1;
	int cnt=0;
	while(l<r) {
		int sum = a[l] + a[r];
		if(sum>k) {
			r--;
		} else if(sum<k) {
			l++;
		} else { // sum == k
			// dem so cap xuat hien nhieu lan;
			int a1=a[l], a2=a[r];
			int cnt_1=0, cnt_2=0;
			while(l<n && a[l] == a1) {
				cnt_1++;
				l++;
			}
			while(r>=0 && a[r] == a2) {
				cnt_2++;
				r--;
			}
			if(a1==a2) {
				cnt += cnt_1 * (cnt_1-1) / 2;
			} else {
				cnt+= cnt_1 * cnt_2;
			}
		}
	}
	cout << cnt;
	
	return 0;
}


