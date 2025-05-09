#include <bits/stdc++.h>
using namespace std;

int main() { // dem so luong tu khac nhau
			// khong phan biet hoa thuong`
			//	28tech 28TECH 28TECH dev Dev
			//^Z
			//2
			//28tech dev
	string s;
	set<string> se;
	while(cin >> s) { // CTRL+Z xong enter 1 phat'
		for(char &x : s) {
			x = tolower(x);
		}
		se.insert(s);
	}
	cout << se.size();
	cout << endl;
	for(string x : se) {
		cout << x << " ";
	}
 	
	return 0;
}






