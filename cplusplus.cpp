#include <bits/stdc++.h>
using namespace std;

int main() { // cout ki tu cung tan xuat 
			// 28tech dev abc 28tech dev c dev abc def
			//^Z
			//2 2
			//8 2
			//a 2
			//b 2
			//c 5
			//d 4
			//e 6
			//f 1
			//h 2
			//t 2
			//v 3
	map<char,int> m;
	string s;
 	while(cin >> s) {
		for(char x : s) {
			m[x]++;
		}
	}
	for(pair<char,int> x : m) {
		cout << x.first << " " << x.second << endl;
	}

	return 0;
}






