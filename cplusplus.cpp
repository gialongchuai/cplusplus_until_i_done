#include<bits/stdc++.h>
using namespace std;

vector<int> ke[100];

bool cmp(int x, int y) {
	return x < y;
}

int main() { // convert danh sach canh sang danh sach ke
			// do thi co huong
			//5 10	// 5 dinh va 10 canh ke giua cac dinh
			//4 2
			//4 1
			//2 5
			//3 4
			//1 5
			//2 3
			//5 1
			//2 1
			//1 4
			//4 5
			
			//1 : 4 5
			//2 : 1 3 5
			//3 : 4
			//4 : 1 2 5
			//5 : 1
	int dinh, canh; cin >> dinh >> canh;
	while(canh--) {
		int x, y; cin >> x >> y;
		ke[x].push_back(y);
	}
	for(int i=1; i<=dinh; i++) {
		cout << i << " : ";
		vector<int> v = ke[i];
		sort(v.begin(), v.end(), cmp);
		for(int x : v) {
			cout << x << " ";
		} 
		cout << endl;
	}
		
	return 0;
}













