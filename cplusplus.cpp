#include <bits/stdc++.h>
using namespace std;

int main() { // 2 con tro : dem tong con lien tiep nho hon hoac bang s
	//13 14
	//5 4 5 2 4 5 1 1 2 5 5 2 2
	//47
	int n, s; cin >> n >> s;
	int a[n+5];
	for(int i=1; i<=n; i++) {
		cin >> a[i];
	}
	int ans = 0, sum = 0;
	int l = 1;
	for(int r=1; r<=n; r++) {
		sum+=a[r];
		while(sum > s && l <= r) { // neu vuot thi dem co bao nhieu thang con
			sum-=a[l]; // loai bo thang dau tien da tinh, tang de tinh day con tiep theo
			l++;
		}
		ans += (r-l+1);
	}
	cout << ans << endl;

    return 0;
}
