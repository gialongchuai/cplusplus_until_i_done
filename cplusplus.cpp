#include <bits/stdc++.h>
using namespace std;

vector<int> permutation;
int n;
int a[105];
int chosen[105];

void solve() {
	if(permutation.size() == n) {
		for(int x : permutation) cout << x << " ";
		cout << "\n";
	} else {
		for(int i=0; i<n; i++) {
			if(chosen[i]) continue;
			
			chosen[i] = 1;
			permutation.push_back(a[i]);
			solve();
			permutation.pop_back();
			chosen[i] = 0;
		}
	}
}

int main() { // sinh hoan vi 
	//	3
	//5 8 7
	//5 8 7
	//5 7 8
	//8 5 7
	//8 7 5
	//7 5 8
	//7 8 5
	cin >> n;
	for(int i=0; i<n; i++) cin >> a[i];
	solve();
	
	return 0;
}
