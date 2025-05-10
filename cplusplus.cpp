#include <bits/stdc++.h>
using namespace std;

int main() { // kiem tra sap xep cac char trong sau co tao
			// thanh sau doi xugn duoc hay khong
			//3
			//appsqss
			//NO
			//abbcaaa
			//YES
			//abbca
			//YES
	int n; cin >> n;
	string s;
	while(n--) {
		cin >> s;
		map<char,int> m;
		for(char x : s) {
			m[x]++;
		}
		int cnt_le = 0;
		for(pair<char,int> x : m) {
			if(x.second%2!=0) cnt_le++;
		}
		if(cnt_le>1) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
		}
	}
	
	return 0;
}






