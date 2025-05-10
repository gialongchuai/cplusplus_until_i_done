#include <bits/stdc++.h>
using namespace std;

int main() { // cout khong trung theo thu tu tu` dien?
			// dong 1: chu xuat hien o ca 2 day 
			// dong 2: chu xuat hien ca 2 xau
			// nTOhOGvRBk
			//bUJtZSoONh
			//Oh
			//BGJNORSTUZbhknotv
	string a, b;
	cin >> a >> b;
	int cnt1[256] = {0};
	int cnt2[256] = {0};
	for(char x : a) {
		cnt1[x] = 1;
	}
	for(char x : b) {
		cnt2[x] = 1;
	}
	for(int i = 0; i < 256; i++) {
		if(cnt1[i] && cnt2[i]) cout << (char)i;
	}
	cout << endl;
	for(int i = 0; i < 256; i++) {
		if(cnt1[i] || cnt2[i]) cout << (char)i;
	}	
	return 0;
}






