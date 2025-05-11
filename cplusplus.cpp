#include <bits/stdc++.h>
using namespace std;

struct SV {
	string name;
	string birth;
	double gpa;
};

bool thang_04(string s) {
	stringstream ss(s);
	string word;
	vector<string> v;
	while(getline(ss,word,'/')) {
		v.push_back(word);
	}
	if(stoi(v[1]) == 4) {
		return true;
	}
	return false;
}

int main() { // struct basic
			// liet ke sinh vien sinh vao thang 04
	int n; cin >> n;
	SV a[n];
	for(int i = 0; i<n; i++) {
		cin.ignore();
		SV v;
		getline(cin,v.name);
		getline(cin,v.birth);
		cin >> v.gpa;
		a[i] = v;
	}
	
	for(SV v : a) {
		if(thang_04(v.birth)) {
			cout << v.name  << " " << v.birth << " " << fixed << setprecision(2) << v.gpa << endl;
		}
	}
	
	return 0;
}






