#include <bits/stdc++.h>
using namespace std;

int n;
int a[100][100];
int used[100];
int mang[100];
int sum = 0;
int min_val = INT_MAX;
void Try(int i) { // hang
	for(int j = 1; j<=n; j++) { // cot X[1] = 1 ; X[2] = 2 truy cap a[x1][x2] = 1:2
							 // x[1] = 1; x[2] = 3 truy cap a[x1][x2] 1:3
		if(used[j] == 0) { // thanh pho chua danh dau thi` moi duoc di
			mang[i] = j; // danh dau thanh pho da di
			used[j] = 1; // do try 2 nen danh dau cac thanh pho di cho 2 3 4 thoi vi` 1 luon danh dau roi` 
			sum+=a[mang[i-1]][mang[i]]; // truy cap mang vd: a(1:2) , a(1:3)
			if(i==n) { // di full n thanh pho bat dau in ra va tim smallest distance 
				for(int t = 2; t<=n; t++) { // do 1 toi 2, 1 toi 3, ....
					cout << mang[t-1] << " " << mang[t] << endl; // cout << quang duong
					if(t==n) {
						cout << mang[t] << " " << 1 << endl; // tp cuoi' in ra cho quay ve 1
					}
				}
 				sum+=a[mang[i]][1]; // cong them duong quay ve 1: truy cap a[n][1]
				min_val = min(min_val,sum); // save smallest distance || instead of + and - : min_val = min(min_val,sum+a[mang[n]][1]);
				cout << sum << endl << endl;
				sum-=a[mang[i]][1]; // tru di luong do de quay lui cho nhanh -1 khong tinh luong da ve 1
			} else { // - sum trong if de biet thang i do la hang hien tai, dem ra ngoai` thi` false luc do dang quay lui cua thang i-1 roi`!!!!!
				Try(i+1);// di thanh pho tiep theo
			}
			sum-=a[mang[i-1]][mang[i]]; // nhanh hien tai luon tinh' nhanh' con, quay lui tra lai
			used[j] = 0; // tra lai thanh pho cho thang` con di (cho thang` con quay!)
		} 
	}
}

int main() { // quay lui nguoi di du lich qua all thanh pho 1 lan duy nhat va quay lai thanh 
			// pho bat dau => cout min distance
	cin >> n;
	for(int i = 1; i<=n; i++) {
		for(int j =1; j<=n; j++) {
			cin >> a[i][j];
		}
	}
	used[1] = 1, mang[1] = 1; // always start bang 1 den tat ca thanh pho khac
	Try(2); // co the di 2 3 4 do try = 2
	cout << min_val;
	
	//5
//	0 85 26 81 11
//	85 0 77 97 32
//	26 77 0 26 45
//	81 97 26 0 12
//	11 32 45 12 0
//	1 2
//	2 3
//	3 4
//	4 5
//	5 1
//	211
//	
//	1 2
//	2 3
//	3 5
//	5 4
//	4 1
//	300
//	
//	1 2
//	2 4
//	4 3
//	3 5
//	5 1
//	264
//	
//	1 2
//	2 4
//	4 5
//	5 3
//	3 1
//	265
//	
//	1 2
//	2 5
//	5 3
//	3 4
//	4 1
//	269
//	
//	1 2
//	2 5
//	5 4
//	4 3
//	3 1
//	181
//	
//	1 3
//	3 2
//	2 4
//	4 5
//	5 1
//	223
//	
//	1 3
//	3 2
//	2 5
//	5 4
//	4 1
//	228
//	
//	1 3
//	3 4
//	4 2
//	2 5
//	5 1
//	192
//	
//	1 3
//	3 4
//	4 5
//	5 2
//	2 1
//	181
//	
//	1 3
//	3 5
//	5 2
//	2 4
//	4 1
//	281
//	
//	1 3
//	3 5
//	5 4
//	4 2
//	2 1
//	265
//	
//	1 4
//	4 2
//	2 3
//	3 5
//	5 1
//	311
//	
//	1 4
//	4 2
//	2 5
//	5 3
//	3 1
//	281
//	
//	1 4
//	4 3
//	3 2
//	2 5
//	5 1
//	227
//	
//	1 4
//	4 3
//	3 5
//	5 2
//	2 1
//	269
//	
//	1 4
//	4 5
//	5 2
//	2 3
//	3 1
//	228
//	
//	1 4
//	4 5
//	5 3
//	3 2
//	2 1
//	300
//	
//	1 5
//	5 2
//	2 3
//	3 4
//	4 1
//	227
//	
//	1 5
//	5 2
//	2 4
//	4 3
//	3 1
//	192
//	
//	1 5
//	5 3
//	3 2
//	2 4
//	4 1
//	311
//	
//	1 5
//	5 3
//	3 4
//	4 2
//	2 1
//	264
//	
//	1 5
//	5 4
//	4 2
//	2 3
//	3 1
//	223
//	
//	1 5
//	5 4
//	4 3
//	3 2
//	2 1
//	211
//	
//	181
}












