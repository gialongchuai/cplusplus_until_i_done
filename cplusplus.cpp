#include <bits/stdc++.h>
using namespace std;

int main() { 
			// co the loai bo het va ton tai chu "python" ?
			// phabptoython => YES
	string s; cin >> s;
	string x = "python";
	int st = 0;
	int cnt = 0;
	
	// cach 01
	for(int i = 0; i < x.size(); i++) {
		for(int j = st; j < s.size(); j++) {
			if(x[i] == s[j]) {
				cnt++;
				st = j+1;
				break;
			}
		}
	}
	if(cnt == x.size()) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	
	// cach 02
	int index = 0;
	for(char xt : s) {
		if(xt == x[index]) {
			index++;
		}
		if(index == 6) {
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	
	return 0;
}






