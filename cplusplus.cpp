#include <bits/stdc++.h>
using namespace std;

bool cmp (string a, string b) {
	if(a.size()!=b.size()) {
		return a.size() < b.size();
	} else {
		return a < b;
	}
}

int main() { // sap xep length tang dan
			// trung len tang dan theo tu dien
			// 28tech dev c dev abc
			// => c abc dev dev 28tech
	vector<string> v;
	string s;
 	while(cin >> s) {
 		v.push_back(s);
	}
	
	sort(v.begin(), v.end(), cmp);
	for(string x : v) {
		cout << x << " ";
	}	 

	return 0;
}






