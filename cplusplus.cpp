#include <bits/stdc++.h>
using namespace std;

int main() {
		// tong cac so trong xau
		// abcd123aad22a05
		// 150
	string s; cin >> s;
	for(char &x : s) {
		if(x < '0' || x > '9') x = ' ';
	}
	stringstream ss(s);
	string word;
	vector<string> v;
	while(ss >> word){
		v.push_back(word);
	}
	for(string &x : v) {
		if(x.size() >1 && x[0] == '0') {
			x.erase(0,1);
		}
	}
	long long sum = 0;
	for(string x : v) {
		long long tmp = stoll(x);
		sum+=tmp;
	}
	cout << sum;

	return 0;
}






