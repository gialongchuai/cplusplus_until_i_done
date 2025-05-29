#include<bits/stdc++.h>
using namespace std;

int main() { // day con co tong = k hay khong ?
			//4 12
			//1 3 7 5
			//0 1 2 3 4 5 6 7 8 9 10 11 12 // day f: voi moi gia tri coi mang a
			//1 1 0 1 1 1 1 1 1 1 1  1  1 // co the tao thanh mang con bang khong (tuc bang 1)
			//Yes
	int n, k; cin >> n >> k;
	int a[n];
	for(int &i : a) {
		cin >> i;
	}
	int f[k+1] = {0}; // luu mang tu` 0 den k
	f[0] = 1;// bai toan con cho tai vi tri dau luon = 1
	
	for(int i=0; i<n; i++) { // voi moi phan tu kiem tra xem
		for(int j=k; j>=a[i]; j--) { // tu vi tri k toi phan tu dang xet
			if(f[j - a[i]]) f[j] = 1; // lay hieu xem f[hieu] = 1 hay khong
		} // bang 1 tuc la co tong day con co the tao thanh` vi tri a[i] dang xet
	}	// bat f = 1
	for(int i = 0; i<=12; i++) {
		cout << i << " ";
	}

	cout << endl;
	for(int i = 0; i<=12; i++) {
		cout << f[i] << " ";
	}
	
	cout << endl;
	if(f[k]) cout << "Yes";
	else cout << "No";

	return 0;
}










