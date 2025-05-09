#include <bits/stdc++.h>
using namespace std;

int main() { // cout tu cung tan xuat theo thu tu xuat hien
	string s;
	map<string,int> m;
	vector<string> v;
	while(cin>>s) {
		m[s]++;
		v.push_back(s);
	}
	
	for(string x : v) {
		if(m[x] != 0) {
			cout << x << " " << m[x] << endl;
			m[x] = 0;
		}
	}
	
	return 0;
}






