#include <bits/stdc++.h>
using namespace std;

string chuan_hoa(string s) {
	string result = "";
	vector<string> v;
	
	stringstream ss(s);
	string word;
	while(ss >> word) {
		v.push_back(word);
	}
	for(string &x:v) {
		for(char &z : x) {
			z = tolower(z);
		}
		x[0] = toupper(x[0]);
	}
	for(string x : v) {
		result += x + ' ';
	}
	result.pop_back();
	return result;
}

string bp_chuan_hoa(string s) {
	string name = "";
	stringstream ss(s);
	string word;
	while(ss >> word) {
		name += toupper(word[0]);
		for(int i = 1 ; i < word.size(); i++) {
			name += tolower(word[i]);
		}
		name += ' ';
	}
	name.pop_back(); // loai bo ki tu space cuoi'
	return name;
}

int main() { // chuan hoa ten: nGuYen VAN   naM
			// => Nguyen Van Nam
	string s;
	getline(cin,s);
	cout << chuan_hoa(s) << endl;
	cout << bp_chuan_hoa(s);
	
	return 0;
}






