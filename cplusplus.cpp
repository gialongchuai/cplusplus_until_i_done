#include <bits/stdc++.h>
using namespace std;

int main() { // so phan tu khac nhau, in nguoc xuoi so phan tu do
	set<char> s;
	int n; cin >> n;
	for(int i = 0; i<n; i++) {
		char c; cin >> c;
		s.insert(c);
	}
	cout << s.size() << endl;
	
	vector<char> v;
	for(char x : s) {
		v.push_back(x);
		cout << x << " ";
	}
	cout << endl;
	
	set<char>::reverse_iterator it;
	for(it = s.rbegin(); it!=s.rend(); it++) {
		cout << *it << " ";
	}
	
	cout << endl << "=========" << endl;
	for(int i = 0; i<v.size(); i++) {
		cout << v[i] << " ";
	}
	
	cout << endl;
	for(int i = v.size() - 1; i>=0; i--) {
		cout << v[i] << " ";
	}
	
	return 0;
}









