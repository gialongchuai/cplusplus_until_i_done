#include <bits/stdc++.h>
using namespace std;

void thaydoi(int a[], int n) {
	for(int i =0; i<n; i++) {
		a[i] = 10;
	}
}

void thaydoi02(vector<int> &v) { // chu y
	for(int i =0; i<v.size(); i++) {
		v[i] = 10;
	}
}

int main() { // vector basic
	int n; cin >> n;
	int a[n];
	for(int i =0; i<n;i ++) {
		cin >> a[i];
	}
	vector<int> v;
	for(int i = 0; i<n; i++) {
		int temp; cin >> temp;
		v.push_back(temp);
	}
	
	for(int x : a) {
		cout << x << " ";
	}
	cout << endl;
	thaydoi(a,n);
	for(int x : a) {
		cout << x << " ";
	}
	cout << endl << "============" << endl;
	
	for(int i = 0; i<v.size();i++) {
		cout << v[i] << " ";
	}
	thaydoi02(v);
	cout << endl;
			for(int i = 0; i<v.size();i++) {
		cout << v[i] << " ";
	}
 	return 0;
}









