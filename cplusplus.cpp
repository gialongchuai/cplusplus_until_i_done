#include <bits/stdc++.h>
using namespace std;

int main() {
	// 28tech voi 28h, 28ph va tinh dang o giai doan h:m tinh xem
	// k phut nua thi o giai doan h:m nao?
	int h, m, k;
	cin >> h >> m >> k;
	k %= 28 * 28; // vuot qua 1 ngay thi chi lay phan phut' du
	int time = h * 28 + m + k;
	time %= 28*28;
	int gio = time / 28, phut = time % 28;
	cout << setw(2) << setfill('0') << "h: " << h << setw(2) << setfill('0') << " m: " << phut;

	return 0;
}
