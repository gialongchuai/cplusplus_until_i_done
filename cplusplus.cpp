#include <bits/stdc++.h>
using namespace std;

int main() { // basic string
	string s; cin >> s; // hello 
	cout << s << endl; // hello
	
	s.push_back('@');
	cout << s << endl; // hello@
	
	s.pop_back();
	cout << s << endl; // hello
	
	s.insert(1,"@@@@@");
	cout << s << endl; // h@@@@@ellos
	
	s.erase(9);
	cout << s << endl; // h@@@@@ell
	s.erase(1,5);
	cout << s << endl; // hell
 	
 	string t1 = s.substr(1); 
 	cout << t1 << endl; // ell
 	
 	string t2 = s.substr(2,1); 
 	cout << t2 << endl; // l
 	
 	string s2 = "28tech hoc lap trinh voi 28tech"; // tra ve tech voi chi so dau tien
 	if(s2.find("tech1")!=string::npos) {
 		cout << "FOUND!" << endl << s2.find("tech") << endl; // 2
	} else {
		cout << "NOT FOUND!" << endl;
	}
	
	for(char &x : s2) {
		x = toupper(x); 
	}
	cout << s2 << endl; // 28TECH HOC LAP TRINH VOI 28TECH
	
	for(char &x : s2) {
		x = tolower(x); 
	}
	cout << s2 << endl; // 28tech hoc lap trinh voi 28tech
	
	for(int i = 0; i < s2.size(); i++) {
		cout << s2[i]; // 28tech hoc lap trinh voi 28tech
	}
	
	cout << endl;
	for(int i = s2.size() - 1; i>=0 ; i--) {
		cout << s2[i]; // hcet82 iov hnirt pal coh hcet82
	}
	cout << endl;
	
	for(char x : s2) {
		cout << (char)toupper(x); // 28TECH HOC LAP TRINH VOI 28TECH
	}
	cout << endl;
	
	for(char x : s2) {
		cout << (char)tolower(x); // 28TECH HOC LAP TRINH VOI 28TECH
	}
	reverse(s2.begin(), s2.end());
	cout << endl << s2 << endl; // hcet82 iov hnirt pal coh hcet82
 	 
	return 0;
}






