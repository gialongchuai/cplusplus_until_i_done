#include <bits/stdc++.h>
using namespace std;

int main() { // xoa phan tu
	set<int> s = {1,3,5,7,9};
	s.erase(5);
	for(int x : s) {
		cout << x << " "; // 1 3 7 9
	}
	cout << endl;
	
	set<int>::iterator it = s.begin();
	it++;
	s.erase(it);
	for(int x : s) {
		cout << x << " "; // 1 7 9
	}
	cout << endl;

	vector<int> v = {1,3,5,7,9};
	vector<int>::iterator it_vector = v.begin() + 3;
	v.erase(it_vector);
	for(int i : v) {
		cout << i << " "; // 1 3 5 9
	}
	
	return 0;
}









