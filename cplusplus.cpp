#include <bits/stdc++.h>
using namespace std;

int main() { // cout khong trung theo thu tu tu` dien?
			// dong 1: chu xuat hien o ca 2 day 
			// dong 2: chu con lai
			// nTOhOGvRBk
			// bUJtZSoONh
			//	Oh
			//	BGJNRSTUZbknotv
	string a, b;
	cin >> a >> b;
	set<char> se_dk1;
	for(int i = 0; i<a.size();i++) {
		for(int j = 0; j<b.size(); j++) {
			if(a[i] == b[j]) {
				se_dk1.insert(a[i]);
				break;
			}	
		}
	}
	for(char x : se_dk1) {
		cout << x;
	}
	cout << endl;
	string z = a+b;
	set<char> se_dk2;
	for(int i = 0; i<z.size() ; i++) {
		if(!se_dk1.count(z[i])) se_dk2.insert(z[i]);
	}
	for(char x : se_dk2) {
		cout << x;
	}
		
	return 0;
}






