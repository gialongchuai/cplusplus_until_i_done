#include <bits/stdc++.h>
using namespace std;

int main() { 
	string s; cin >> s;
	s+=s[s.size()-1]; // cho 2 thang cuoi bang nhau de roi vao` else update res ;)))
	cout << s << endl; // s+=s.back();
	string tmp = "";
	tmp += s[0];
	string res = "";
	res += s[0];
	for(int i = 1;i<s.size(); i++) {
		if(s[i] != s[i-1]) tmp += s[i];
		else {
			if(tmp.size() > res.size()) res = tmp;
			if(tmp.size() == res.size() && tmp > res) res = tmp;
			tmp = "";
			tmp+=s[i];
		}
	}
	
	cout << res;
		
	return 0;
}






