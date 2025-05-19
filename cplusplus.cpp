#include <bits/stdc++.h>
using namespace std;

int a[500];
int n, k, final = 1;

void khoitao(){
	cin >> n >> k; // C 5 cua 9 : k=5 , n=9
	for(int i = 1; i <= k; i++) {
		a[i] = i;
	}
}

void sinh() {
	int i = k;
	while(i>=1 && a[i]==n-k+i) {
		i--; // tim phan tu dau tien chua dat gia tri max tinh tu ben phai
	}
	if(i == 0) {
		final = 0;
	} else {
			a[i] += 1;	
		int ans = 1; // 3 5 6 => 4 5 6
		for(int j = i + 1; j<=k; j++) {
			a[j] = a[i] + ans;
			ans++;
		}
	}
}

int main() { // dem chuoi con to hop
	khoitao();
	vector<vector<int>> v;
	int stt = 0;
	while(final) {
		stt++;
		vector<int> v_tamp;
		for(int i = 1; i<=k; i++) {
			cout << a[i];
			v_tamp.push_back(a[i]);
		}
		v.push_back(v_tamp);
		cout << endl;
		sinh();
	}
	cout << endl;
	
	for(vector<int> x : v) {
		for(int j : x) {
			cout << j;
		}
		cout << endl;
	}
	cout << stt << " " << v.size();

	return 0;
}









