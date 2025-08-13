#include <bits/stdc++.h>
using namespace std;

void solve(int n){
	for(int i=0; i<(1<<n); i++) {
		cout << "{";
		vector<int> v;
		for(int j=0; j<n; j++) {
			if(1&(i>>j)) {
				v.push_back(j);
			}
		}
		for(int k=0; k<v.size(); k++)  {
			cout << v[k];
			if(k>=0 && k<v.size()-1) cout << ",";
		}
		cout << "}";
	}
}

int main() {
	int n; cin >> n;
	solve(n);
	
	return 0;
}
