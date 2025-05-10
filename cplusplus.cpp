#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b) {
	if(a.size()!=b.size()) {
		return a.size() > b.size();
	} else {
		return a > b; // 9 > 8 theo thu tu tu` dien
	}
}

int main() { // so lon nhat xuat hien trong sau
			// sjandj123123jfsdan000000000000012128842jn81212131823238asjn@@@@@@@@@@@@@@@djas81212131823239wej
			//       123123      000000000000012128842  81212131823238                       81212131823239
			// => 81212131823239
			// 0a0
			// => 0
	string s;
	cin >> s;
	for(int i = 0; i<s.size(); i++) {
		char x = s[i];
		if(x<'0'|| x>'9') {
			s[i] = ' ';
		}
	}
	cout << s << endl;
	stringstream ss(s);
	string word;
	vector<string> v;
	while(ss >> word) {
		v.push_back(word);
	}
	for(string &x : v){
		while(x[0]=='0' && x.size() > 1) { // xoa so 0 vo nghia
			x.erase(0,1);
		}
	}
	sort(v.begin(), v.end(), cmp);
	cout << v[0];
	
	return 0;
}






