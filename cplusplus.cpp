#include <bits/stdc++.h>
using namespace std;

int main() { // uoc chung lon nhat giua 2 cap so bat ki
	int n, x; cin >> n;
	map<int,int> m;
	int max_val = 0;
	for(int i = 0 ; i < n; i++) {
		cin >> x;
		m[x]++;
		if(x > max_val) max_val = x;
	}
	
	for(pair<int,int> x : m) {
		cout << x.first << " " << x.second << endl;
	}
	
	for(int i = max_val; i>=1; i--) {
		int sum = 0;
		for(int j = i; j <= max_val; j+=i) {
			sum+= m[j];
		}
		if(sum >= 2) {
			cout << i ;
			break;
		}
	}
	
	
	return 0;
}









