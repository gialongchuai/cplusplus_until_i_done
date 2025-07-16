#include <bits/stdc++.h>
using namespace std;

int main() { // 2 con tro : dem tong con lien tiep nho hon hoac bang s
	//5 5
	//1 2 3 4 5
	//1 3 5 6 7
	//7
	int n, s; cin >> n >> s;
	int a[n+5];
	for(int i=1; i<=n; i++) {
		cin >> a[i];
	}
	int ans = 0, sum = 0;
	int l = 1;
	for(int r=1; r<=n; r++) {
		sum+=a[r];
		while(sum > s && l <= r) { // lon hon xoa bot con
			sum-=a[l]; // loai bo nhung thang dau tien da tinh, tang de tinh day con vuot nguong s tiep theo
			l++;
		}
		ans += (r-l+1); // nho hon thi tinh tap con
		cout << ans << " ";
	}
	cout << endl << ans << endl;

    return 0;
}
