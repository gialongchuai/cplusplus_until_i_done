#include <bits/stdc++.h>
using namespace std;

int main() { // cout string cung tan xuat 
			// 28tech dev abc 28tech dev c dev abc def
			//^Z
			//28tech 2
			//abc 2
			//c 1
			//def 1
			//dev 3
	map<string,int> m;
	string s;
 	while(cin >> s) {
		m[s]++;
	}
	for(pair<string,int> x : m) {
		cout << x.first << " " << x.second << endl;
	}

	return 0;
}






