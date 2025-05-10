#include <bits/stdc++.h>
using namespace std;

int main() { // chuan hoa email, pass tranh trung email
			//4
			//nguyen   van LOng 20/10/2002
			//longnv@xyz.edu.vn
			//20102002
			//ngo Vang Long 20/02/2002
			//longnv2@xyz.edu.vn
			//2022002
			//Nguyen   Vu Long 02/12/2003
			//longnv3@xyz.edu.vn
			//2122003
			//ho van   nam 17/09/2002
			//namhv@xyz.edu.vn
			//1792002
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






