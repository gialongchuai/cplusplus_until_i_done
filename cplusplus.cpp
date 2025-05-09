#include <bits/stdc++.h>
using namespace std;

vector<string> chuan_hoa_space(string s) {
	stringstream ss(s);
	string name;
	vector<string> v;
	string word;
	while(ss >> word) {
		v.push_back(word);
	}
	return v;
}

vector<string> chuan_hoa_dau_gach(string s) {
	stringstream ss(s);
	string name;
	vector<string> v;
	string word;
	while(getline(ss,word,'/')) {
		v.push_back(word);
	}
	return v;
}

int main() { // chuan hoa email: 
				//2
				//nguyen  VAN  NAM    22/07/2002
				//le THI  HONG nHUNG 30/07/1991
	int n; cin >> n; cin.ignore();
	while(n--) {
		string s;
		getline(cin,s);
		for(char &x : s) {
			x = tolower(x);
		}
		vector<string> v = chuan_hoa_space(s);
		cout << v[v.size()-2]; 
		for(int i = 0; i<v.size()-2; i++) {
			string x = v[i];
			cout << x[0];
		}
		cout << "@xyz.edu.vn" << endl;
		vector<string> birth = chuan_hoa_dau_gach(v[v.size()-1]);
		for(string x : birth) {
			if(x[0] == '0') x.erase(0,1);
			cout << x;
		}
		cout << endl;
	}
	
	return 0;
}






