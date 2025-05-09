#include <bits/stdc++.h>
using namespace std;

int main() { // kiem tra 1 chu so cuc lon co chu so dung giua 
// vd 1123 =) no 
// vd 111 =) yes and cout so do'
	string s;
	cin >> s;
	if(s.size() % 2== 0) { 
		cout << "no";
	} else {
		cout << "yes";
		cout << endl << s[s.size()/2];
	}
	
 	
	return 0;
}






