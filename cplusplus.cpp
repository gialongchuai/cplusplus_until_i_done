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
			string re = "(" + top1 + s[i] + top2 + ")";
			st.push(re);
		}
	}
	return st.top();
}

int main() {	// prefix to infix : chuyen doi tu tien to sang trung to
	//			-*AB+CD
	//		=> ((A*B)-(C+D))
	string s; cin >> s;
	cout << solve(s);
	
	return 0;
}









