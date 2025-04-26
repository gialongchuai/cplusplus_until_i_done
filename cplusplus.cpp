#include <bits/stdc++.h>
using namespace std;

int main() {
	// 28tech voi 28h, 28ph va tinh dang o giai doan h:m tinh xem
	// k phut nua thi o giai doan h:m nao?
	int a, b, c;
	cin >> a >> b >> c;
	int min_val = min({a,b,c});
	int max_val = max({a,b,c});
	
	// Toi uu
	cout << min_val << " " << (a+b+c - min_val - max_val) << " " << max_val << endl;
	
	int middle;
	if(a != min_val && a != max_val) middle = a;
	if(b != min_val && b != max_val) middle = b;
	if(c != min_val && c != max_val) middle = c;
	cout << min_val << " " << middle << " " << max_val;
	
	return 0;
}
