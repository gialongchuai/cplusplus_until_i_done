#include <bits/stdc++.h>
using namespace std;

int main() { // ve xem phim nho hon hoac bang
			//5 4
			//5 3 7 8 5
			//4 6 6 6
			//3 5 5 7 8
			//3
			//5
			//5
			//-1
	int n, m; cin >> n >> m;
	multiset<int> ms;
	int a[m];
	for(int i = 0; i<n; i++) {
		int tmp; cin >> tmp;
		ms.insert(tmp);
	}
	for(int &x : a) {
		cin >> x;
	}
//	cout << endl;
	for(int x : ms) {
		cout <<  x << " ";
	}
	cout << endl;	
	multiset<int>::iterator it;
	for(int x : a) {
		it = ms.upper_bound(x); // tl: it = upper_bound(ms.begin(),ms.end(),x);
		if(it!=ms.begin()) { // tranh dung cmt bi time limit
			--it;
			cout << *it << endl;
			ms.erase(it); // xoa 1 ve tranh *it xoa all ve co gia tri bang *it
		} else {
			cout << -1 << endl;
		}
	}

	return 0;
}









