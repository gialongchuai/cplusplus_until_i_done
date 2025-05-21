#include <bits/stdc++.h>
using namespace std;

int n, final = 0;
int a[500];
int cnt;

void khoitao() {
	cin >> n;
	cnt = 1;
	a[cnt] = n;
}

void sinh() {
	int i = cnt; // tinh so vong lap do khong co dinh nhu n
	while(i>=1 && a[i] == 1) {
		i--;
	}
	if(i==0){
		final = 1;
	} else {
		--a[i]; // d : con thieu di qua bao nhieu so 1 cong don them ca --a[i] + 1 vao`
				// thay vi cong cac so dau roi` lay n - (sum)
		int d = cnt - i + 1;
		int x = d / a[i]; // tinh so vong lap de gan a[cnt] chia het cho a[i] 
		int r = d % a[i]; // neu du gan vao cnt cuoi
		cnt = i; // i giam ma cnt khong giam, nen cau phai update lai cnt
		for(int j = 1; j<=x; j++) {
			cnt++;
			a[cnt] = a[i];
		}
		if(r!=0) {
			cnt++;
			a[cnt] = r;
		}
	}
}

int main() { // thuat toan sinh phan hoach
	khoitao();
	while(final == 0) {
		for(int i = 1; i<=cnt; i++) {
			cout << a[i] << " ";
		}
		sinh();
		cout << endl;
	}
		//7
		//7
		//6 1
		//5 2
		//5 1 1
		//4 3
		//4 2 1
		//4 1 1 1
		//3 3 1
		//3 2 2
		//3 2 1 1
		//3 1 1 1 1
		//2 2 2 1
		//2 2 1 1 1
		//2 1 1 1 1 1
		//1 1 1 1 1 1 1
	
	return 0;
}









