#include <bits/stdc++.h>
using namespace std;

int pos[1000];

int main() { // tim so vong tang dan`
			//8
			//8 1 4 5 3 2 7 6
			//5
			//5
			//1 2
			//2 6
			//3 5
			//4 3
			//5 4
			//6 8
			//7 7
			//8 1
			
			//5
			//4 2 1 5 3
			//3
			//3
			//1 3
			//2 2
			//3 5
			//4 1
			//5 4
	int n; cin >> n;
	vector<int> v;
	map<int,int> m;
	for(int i = 1; i<= n; i++) {
		int tmp; cin >> tmp;
		m[i] = tmp;
		v.push_back(tmp);
		
		// cach bp 02
		pos[tmp] = i;
	}
	int cnt = 1;
	for(int i = 2; i<n; i++) {
		for(pair<int,int> x : m) {
			if(x.second == i) {
				if(x.first >= i) cnt++;
			}
		}
	}
	cout << cnt;
	cout << endl;
	int ans = 1;
	for(int i = 2; i<=n; i++) {
		if(pos[i] < pos[i-1]){
			ans++;
		}
	}
	cout << ans << endl;
	
	for(int i = 1; i<=n; i++) {
		cout << i << " " << pos[i] << endl;
	}
	return 0;
}









