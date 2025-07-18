#include<bits/stdc++.h>
using namespace std;

int main() { // dem chuoi con day nhat lien nhau voi so luong 0 == 1
	//111001010
	//8 => 8 ki tu cuoi co 4 so 0 va 4 so 1
	string s; cin >> s; 
	int n = s.size();	// convert 0 => -1 : bai toan thanh dem day con co tong bang 0 dai` nhat ;))
	int a[n];
	for(int i=0; i<n; i++) a[i] = s[i] - '0';
	for(int &x : a) if(x == 0) x=-1;

	map<int,int> m; // map luu tru tong xuat hien tai vi tri i
	int ans = 0, sum = 0;
	for(int i=0; i<n; i++) {
		sum+=a[i]; // tong cong don` vao`
		if(sum == 0) ans = i+1; // neu cong don` ma` tai vi tri == 0 tuc nguyen day chay tu` 1 toi i +== 0
		if(m.find(sum) != m.end()) { // da tim thay tong cong tru lai xuat hien tong tuc day con tong == 0 hay noi cach khac nguyen day co so luong 0 va 1 bang nhau
			ans = max(ans, i - m[sum]);
		} else {
			m[sum] = i; // luu vi tri dau tien xuat hien tong
		}
	}
	cout << ans;

	
	return 0;
}







