#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> v;

void solve(int k) {
	if(k==n) {
		cout << "{";
		int end = v.size();
		for(int i=0; i<end; i++) {
			cout << v[i];
			if(i>=0 & i<end-1) cout << ",";
		}
		cout << "} ";
	} else {
		solve(k+1);
		v.push_back(k);
		solve(k+1);
//		v.push_back(k);
		
		v.pop_back();
	}
}

int main() { // generate subarr
	cin >> n;
	solve(0);
	
	return 0;
}
