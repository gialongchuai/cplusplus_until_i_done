#include <bits/stdc++.h>
using namespace std;

string solve(string s) {
	stack<string> st;
	for(int i=s.size()-1; i>=0; i--) {
		if(isalpha(s[i])) {
			string tmp = string(1, s[i]);
			st.push(tmp);
		} else {
			string top1 = st.top();
			st.pop();
			string top2 = st.top();
			st.pop();
			string re = top1 + top2 + s[i];
			st.push(re);
		}
	}
	return st.top();
}

int main() {	// prefix to suffix : chuyen doi tu tien to sang hau to
		//	*+AB-UV
		//	=> AB+UV-*
	string s; cin >> s;
	cout << solve(s);
	
	return 0;
}









