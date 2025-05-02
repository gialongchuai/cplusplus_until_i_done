#include <bits/stdc++.h>
using namespace std;

int main() { //  duyet set
	set<int> s = {3,2,1,4,4,5,7};
	for(int x : s) {
		cout << x << " "; // 1 2 3 4 5 7
	}
	cout << endl;
	
	set<int>::iterator it;
	for(it = s.begin(); it!=s.end(); it++) {
		cout << *it << " "; // 1 2 3 4 5 7
	}
	cout << endl;
	
	set<int>::reverse_iterator it1;
	for(it1 = s.rbegin(); it1!=s.rend(); it1++) {
		cout << *it1 << " "; // 7 5 4 3 2 1
	}
	cout << endl;
	
	cout << *(s.begin()) << " " << *(s.rbegin()) << endl; // min max set
	cout << *s.begin() << " " << *s.rbegin(); // min max set
	
	return 0;
}









