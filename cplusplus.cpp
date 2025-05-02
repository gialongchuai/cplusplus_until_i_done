#include <bits/stdc++.h>
using namespace std;

int cnt[100000001];

int main() { // count phan tu khac nhau _ 3 cach
	// cach 1: 2 vong for
	int n; cin >> n;
	int max_val = 0; // max_val cho mang danh dau
	set<int> s;
	
	int a[n], cnt1 = 0;
	for(int i = 0; i<n; i++) {
		int tmp; cin >> tmp;
		a[i] = tmp; // 2 vong for
		cnt[tmp] = 1; // mang danh dau
		s.insert(tmp); // set
		if(a[i] > max_val) max_val = a[i];
	}
	
	for(int i = 0; i<n; i++) {
		bool flag = true;
		for(int j = i-1; j>=0; j--) {
			if(a[i] == a[j]) flag = false;
		}
		if(flag) cnt1++;
	}
	cout << cnt1 << endl;
	
	// cach 2: mang danh dau
	int cnt2 = 0;
	for(int i = 0; i<=max_val; i++) {
		if(cnt[i] != 0) {
			cnt2++;
		}
	}
	cout << cnt2 << endl;
	
	// cach 3: set
	cout << s.size();
	return 0;
}









