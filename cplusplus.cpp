#include <bits/stdc++.h>
using namespace std;



int main() { // sap xep mang tang dan theo 3 cach
	int n, x; cin >> n;
	int a[n];
	map<int,int> m;
	for(int i = 0; i <n;i++) {
		cin >>a[i];
		m[a[i]]++;
	}
	for(pair<int,int> x : m) { // cach 01
		while(x.second--) {
			cout << x.first  << " ";
		}
	}
	
	cout << endl;
	int min_val = 0, max_val = 0;
	for(int x:a) {
		if(x>max_val) max_val = x;
		if(x<min_val) min_val = x;
	}
	
	for(int i = min_val; i<=max_val; i++) { // duyet min max vuot pickelball
		for(int j = 0; j < n; j++) {
			if(a[j] == i) {
				cout << i << " ";
			}
		}
	}
	cout << endl;
	for(int i = 0; i<n; i++) { // doi cho voi thang nho nhat tu` i+1 ve sau
		int min_value = a[i], res = i;
		for(int j = i+1; j<n; j++) {
			if(min_value > a[j]) min_value = a[j], res = j;
		}
		if(a[i] > min_value) {
			int tmp = a[i];
			a[i] = a[res];
			a[res] = tmp;
		}
	}
	for(int x : a) {
		cout << x << " ";
	}
	
	return 0;
}









