#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b){
	string x = a+b;
	string y = b+a;
	return x>y;
}

int main() {
		// ghep thanh` so lon nhat tuc la sap xep theo tu dien giam nhi?
		//123abcda234kkf11
		//23412311
	string s; cin >> s;
	for(char &x : s) {
		if(isalpha(x)) x = ' ';
	}
	stringstream ss(s);
	string word;
	vector<string> v;
	while(ss>>word) {
		if(word[0] == '0' && word.size() > 1) {
			word.erase(0,1);
		}
		v.push_back(word);
	}
	sort(v.begin(), v.end(), cmp);
	for(string x : v) cout << x;

	return 0;
}






