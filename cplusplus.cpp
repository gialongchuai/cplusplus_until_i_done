#include <bits/stdc++.h>
using namespace std;

int cnt[1000001];

int main() { // mang danh dau // tim so xuat hien nhieu nhat neu trung nhau
			// in so dau tien trong day
	int n; cin >> n;
	int a[n];
	for(int i = 0; i<n; i++) {
		cin >> a[i];
	}
	
	int max_val = a[0];
	for(int i = 0; i<n; i++) {
		cnt[a[i]]++;
		if(a[i] > max_val) max_val = a[i];
	}
	
	int tan_suat_max = 0;
	for(int i = 0; i<=max_val; i++) {
		if(cnt[i] != 0) {
			if(cnt[i] > tan_suat_max) tan_suat_max = cnt[i];
		}
	}
	
	for(int i = 0 ; i<n; i++) {
		if(cnt[a[i]] == tan_suat_max) {
			cout << a[i] << " " << cnt[a[i]];
			break;
		}
	}
	cout << endl;
	
	// bp
	int temp = 0, max_temp = 0;
	for(int i = 0; i< n; i++) {
		if(cnt[a[i]] != 0) {
			if(cnt[a[i]] > max_temp) { // lay thang dau > ; lay thang cuoi >=
				max_temp = cnt[a[i]];
				temp = a[i];
			}
		}
	}
	cout << temp << " " << max_temp;
			
	return 0;
}









