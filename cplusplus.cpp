#include <bits/stdc++.h>
using namespace std;

string chuanHoa(string s) {
	string name = "";
	name += toupper(s[0]);
	for(int i = 1; i < s.size(); i++) {
		name += tolower(s[i]);
	}
	return name;
}

string inHoa(string s) {
	for(char &x : s) {
		x = toupper(x);
	}
	return s;
}

int main() { // chuan hoa ten:
				//tRAN    van  tECH28
				//
				//Tran Van, TECH28
				//TECH28, Tran Van
	string s;
	vector<string> v;
	string name;
	while(cin >> s) {
		name = chuanHoa(s);
		v.push_back(name);
	}
	v[v.size()-1] = inHoa(v[v.size()-1]);
	for(int i = 0; i <v.size() -1; i++) {
		if(i!=v.size()-2) {
			cout << v[i] << " ";
		} else {
			cout << v[i] << ", ";
		}
	}
	cout << v[v.size()-1] << endl;
	cout << v[v.size()-1] << ", ";
		for(int i = 0; i <v.size() -1; i++) {
		if(i!=v.size()-2) {
			cout << v[i] << " ";
		} else {
			cout << v[i];
		}
	}
	
	return 0;
}






