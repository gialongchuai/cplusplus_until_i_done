#include<bits/stdc++.h>
using namespace std;

int main() { // day con co chieu dai` dai` nhat
			//10
			//1 3 1 2 4 7 1 5 6 2
			//1 2 1 2 3 4 1 4 5 2
			//5
			// note: 1 2 4 5 6
	int n; cin >> n;
	int a[n];
	int F[n];
	for(int &i : F) i=1;
	for(int i = 0; i<n; i++) {
		cin >> a[i];
	}
	for(int i = 0; i<n; i++) {
		int max_val = 1;
		bool check = false;
		for(int j = i-1; j >=0; j--) {
			if(a[j]<a[i]) {
				check = true;
				max_val = max(F[j], max_val);
			}
		}
		if(check) F[i] = max_val + 1;
	}
	for(int i : F) cout << i << " ";
	cout << endl;
	
	int max_val = INT_MIN;
	for(int x:F) max_val=max(x,max_val);
	cout << max_val;

	return 0;
}










