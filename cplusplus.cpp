#include <bits/stdc++.h>
using namespace std;

int n;
int a[100][100];
int used[100];
int mang[100];
int sum = 0;
int min_val = INT_MAX; int cmin = INT_MAX;
void Try(int i) { 
	for(int j = 1; j<=n; j++) { 
		if(used[j] == 0) {
			mang[i] = j; 
			used[j] = 1;
			sum+=a[mang[i-1]][mang[i]]; 
			if(i==n) { 
				for(int t = 2; t<=n; t++) { 
					cout << mang[t-1] << " " << mang[t] << endl; 
					if(t==n) {
						cout << mang[t] << " " << 1 << endl; 
					}
				}
 				sum+=a[mang[i]][1]; 
				min_val = min(min_val,sum); // chay lan` dau` de cap nhat min_val 
				cout << sum << endl << endl;
				sum-=a[mang[i]][1]; 
			} else if(sum + (n-i+1) * cmin < min_val) { // sau do chap nhan nhung doan duong cua cac
				Try(i+1); // doan duong con` lai la min nho nhat trong matrix
			}
			sum-=a[mang[i-1]][mang[i]];
			used[j] = 0; 
		} 
	}
}

int main() { 
	cin >> n;
	for(int i = 1; i<=n; i++) {
		for(int j =1; j<=n; j++) {
			cin >> a[i][j];
			if(a[i][j]) cmin = min(cmin, a[i][j]); // tim min
		}
	}
	used[1] = 1, mang[1] = 1; 
	Try(2); 
	cout << min_val;
}










