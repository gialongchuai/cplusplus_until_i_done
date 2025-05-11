#include <bits/stdc++.h>
using namespace std;

bool snt(int n) {
	if(n<2) return false;
	for(int i =2; i*i<=n; i++) {
		if(n%i==0) return false;
	}
	return true;
}

int main() { // kiem tra so dep cua 1 so cuc lon
			// chu so la snt, tong la snt
			//373
			// => YES	
			//129
			// => NO
	string s; cin >> s;
	int sum = 0;
	for(char x : s){
		int tmp = x - '0';
		if(tmp != 2 && tmp != 3 && tmp != 5 && tmp != 7) {
			cout << "NO";
			return 0;
		}
		sum+=tmp;
	}
	
	if(snt(sum)) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	
	return 0;
}






