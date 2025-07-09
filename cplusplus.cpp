#include <bits/stdc++.h>
using namespace std;

int main() {	// stack : cout phan tu dau tien ben phai lon hon phan tu dau tien ben phai cua tung phan tu trong mang
	//5
	//11 18 12 18 10		// mang gom 5 phan tu
	//18 -1 18 -1 -1		// cout phan tu dau` tien nam` ben phai lon hon phan tu dang dung
	//10 12 10 10 -1		// cout phan tu dau` tien nam` ben phai nho hon phan tu dang dung
	//12 -1 10 -1 -1		// cout phan tu dau` tien ben phai nho hon phan tu dau` tien ben phai lon hon phan tu dang dung
	int n; cin >> n;
	int a[n];
	for(int i=0; i<n; i++) {
		cin >> a[i];
	}
	int res1[n], res2[n], a1[n], a2[n];
	stack<int> st;
	for(int i=0; i<n; i++) {
		if(st.empty()) { // xu ly phan tu dau` tien, hoac bo cai if nay van dung do push i la` sure to do
			st.push(i);
		} else {
			while(!st.empty() && a[st.top()] < a[i]) { // da tim` dc phan tu dau` tien thi con mac dinh bang cha da tim`
				res1[st.top()] = i; // luu chi so
				a1[st.top()] = a[i]; // luu gia tri
				st.pop();
			}
			st.push(i); // them thang` hien tai vao de lat xu ly tiep
		}
	}
	
	while(!st.empty()) { // them vao` ma chua tim` dc thi` cho = -1
		res1[st.top()] = -1;
		a1[st.top()] = -1;
		st.pop();
	}
	
	for(int i=0; i<n; i++) {
		while(!st.empty() && a[i] < a[st.top()]) {
			res2[st.top()] = i;
			a2[st.top()] = a[i];
			st.pop();
		}
		st.push(i);
	}
	while(!st.empty()) {
		res2[st.top()] = -1;
		a2[st.top()] = -1;
		st.pop();
	}
	
	// cout phan tu dau` tien lon hon ben phai 
	for(int i=0; i<n; i++) {
		cout << a1[i] << " ";
	}
	
	cout << endl;
	//cout phan tu dau` tien nho hon ben phai
	for(int i=0; i<n; i++) {
		cout << a2[i] << " ";
	}
	
	cout << endl;
	for(int i=0; i<n; i++) {
		int greater = res1[i]; // truy cap phan tu CHI SO lon hon dau` tien ben phai
		if(greater == -1) {
			cout << "-1 ";
		} else {
			if(res2[greater] == -1) {
				cout << "-1 ";
			} else {
				cout << a[res2[greater]] << " ";
			}
		}
	}
	
	return 0;
}









