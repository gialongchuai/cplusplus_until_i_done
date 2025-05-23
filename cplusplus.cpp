#include <bits/stdc++.h>
using namespace std;

int a[100];
int n;
int used[100];

void QL(int i) { // di tu 1 den n
	for(int j = 1; j <= n; j++) {
		if(used[j] == 0) {
			a[i] = j;
			used[j] = 1; // danh dau so dung roi khong dung lai
			if(i==n) { // dat den n in ra
				for(int k =1 ; k<=n; k++) {
					cout << a[k];
				}
				cout << endl;
			} else {
				QL(i+1); // quay chua toi i==n thi` tiep tuc quay (dua vao ngan xep)
			}
			used[j] = 0; // danh dung het trong if roi` thi` tra lai cho ngta
						// chac chan la giai phong het con chu khong phai ca nhanh 
						//de di sang nhanh khac j++
		}
	}
}

int main() { // thuat toan sinh hoan vi
	cin >> n;
	QL(1);
	
	return 0;
}
