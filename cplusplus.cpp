#include <bits/stdc++.h>
using namespace std;

int main() { // do chenh lech nho nhat giua 2 vi tri trong mang
	int n; cin >> n;
	int a[n];
	for(int i = 0; i<n; i++) {
		cin >> a[i];
	}

	int distance_min = abs(a[0]-a[1]); // co the dung int_max sau do trong for 2 gan lai bang min(a,b)
	for(int i = 0 ; i < n - 1; i++) { 
		for(int j = i + 1; j < n; j++) {
			int e = abs(a[i] - a[j]);
			if(e < distance_min) distance_min = e;
		}
	}
	cout << distance_min;
		
	return 0;
}









