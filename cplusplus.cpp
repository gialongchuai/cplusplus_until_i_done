#include <bits/stdc++.h>
using namespace std;

int main() {	// voi moi phan tu trong man cout phan tu nho hon dau tien cua phan tu lon hon dau tien ben phai
		//7
		//10 3 4 2 5 3 10
		//-1 4 5 5 10 10 -1
	int n; cin >> n;
	int a[n];
	for(int i=0; i<n; i++) {
		cin >> a[i];
	}
	int res[n];
	stack<int> st;
	for(int i=0; i<n; i++) {
		if(st.empty()) { // xu ly phan tu dau` tien, hoac bo cai if nay van dung do push i la` sure to do
			st.push(i);
		} else {
			while(!st.empty() && a[st.top()] < a[i]) { // da tim` dc phan tu dau` tien thi con mac dinh bang cha da tim`
				res[st.top()] = a[i];
				st.pop();
			}
			st.push(i); // them thang` hien tai vao de lat xu ly tiep
		}
	}
	
	while(!st.empty()) { // them vao` ma chua tim` dc thi` cho = -1
		res[st.top()] = -1;
		st.pop();
	}
	
	for(int i=0; i<n; i++) {
		cout << res[i] << " ";
	}
	
	return 0;
}









