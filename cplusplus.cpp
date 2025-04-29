#include <bits/stdc++.h>
using namespace std;

int main() { // min max trong day
	int n; cin >> n;
	int a[n];
	for(int i = 0; i<n; i++) {
		cin >> a[i];
	}
	
	int min_val = a[0], max_val = a[0];
	for(int x : a) {
		if(x>max_val) max_val = x;
		if(x<min_val) min_val = x;
	}
	cout << min_val << " " << max_val << endl;
	
	//bp : do ton them 1 vong lap duyen 0
	for(int i = 1; i<n; i++) {
		if(a[i]>max_val) max_val = a[i];
		if(a[i]<min_val) min_val = a[i];
	}
	cout << min_val << " " << max_val;
	
	return 0;
}









