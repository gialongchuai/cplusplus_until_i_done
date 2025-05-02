#include <bits/stdc++.h>
using namespace std;

int main() { // pair basic
	int n; cin >> n;
	pair<int,int> p3[n];
	for(int i=0; i<n; i++) {
		cin >> p3[i].first >> p3[i].second;
	}
	cout << "=====" << endl;
	for(int i=0; i<3; i++) {
		cout << p3[i].first << " " << p3[i].second << endl;
	}
	
	pair<int,int> p = {3,5};
	cout << p.first << " " << p.second << endl; // 3 5
	
	pair<int,int> p1 = make_pair(10,8);
	cout << p1.first << " " << p1.second << endl; // 10 8
}









