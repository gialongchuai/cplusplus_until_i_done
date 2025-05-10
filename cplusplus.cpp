#include <bits/stdc++.h>
using namespace std;

int main() { // chuan hoa email, pass tranh trung email
	int n; cin >>n; cin.ignore();
	string s;
	map<string,int> map_email;
	while(getline(cin,s)) {
		for(char &x : s) {
			x = tolower(x);
		}
		stringstream ss(s);
		string word;
		vector<string> v;
		while(ss >> word) {
			v.push_back(word);
		}
		int n = v.size();
		string email = v[n-2];
		for(int i = 0; i < n -2; i++) {
			email += v[i][0];
		}

		if(!map_email.count(email)) {
			cout << email << "@xyz.edu.vn" << endl;
			map_email[email]++;
		} else {
			cout << email << map_email[email]+1 << "@xyz.edu.vn" << endl;
			map_email[email]++;
		}
		string ns = v[n-1];
		stringstream zz(ns);
		string token;
		while(getline(zz,token, '/')) {
			if(token[0] == '0') token.erase(0,1);
			cout << token;
		}
		
		cout << endl;
	}
	
	return 0;
}






