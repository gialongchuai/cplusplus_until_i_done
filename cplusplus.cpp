#include <bits/stdc++.h>
using namespace std;

int main() { // bai toan con soc nhay trong mang voi buoc nhay k
			//5 3
			//5 1 1 4 7
			//0 4 4 1 4
			//4
	int n, k; cin >> n >> k;
	int a[n];
	for(int i = 0; i <n; i++) {
		cin >> a[i];
	}
	int F[n];
	F[0] = 0;
	for(int i=1; i<n; i++) {
		F[i] = INT_MAX;
		for(int j = 1; j <= k; j++) { // lui tu` 1 den k
			if(i-j >=0) { // dam bao tinh chi truy cap >=a[0]
				F[i] = min(F[i], F[i-j] + abs(a[i] - a[i-j]));
			}
		}
	}
	for(int x : F) {
		cout << x << " ";
	}
	cout << endl << F[n-1];
	
 	return 0;
}










