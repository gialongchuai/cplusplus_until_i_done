#include <bits/stdc++.h>
using namespace std;

vector<string> chuan_hoa_ten(string s) {
	string name = "";
	stringstream ss(s);
	string word;
	vector<string> v;
	while(ss >> word) {
		word[0] = toupper(word[0]);
		for(int i =1; i<word.size() ;i++) {
			word[i] = tolower(word[i]);
		}
		v.push_back(word);
	}
	for(char &x : v[v.size()-1]) {
		x = toupper(x);
	}
	return v;
}

int main() { // chuan hoa ten:
				//tRAN    van  tECH28
				//
				//Tran Van, TECH28
				//TECH28, Tran Van
				
	string name;
	getline(cin,name);
	vector<string> v = chuan_hoa_ten(name);
	string s1 = "";
	for(int i = 0 ; i<v.size()-1;i++) {
		s1 += v[i] + ' ';
	}
	s1.pop_back();
	cout << s1 << ", " << v[v.size()-1] << endl;
	
	cout << v[v.size()- 1] << ", ";
	string s2 = "";
	for(int i = 0 ; i<v.size()-1;i++) {
		s2 += v[i] + ' ';
	}
	s2.pop_back();
	cout << s2;
	
	return 0;
}






