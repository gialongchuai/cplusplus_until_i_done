#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
	queue<string> q;
	q.push("1");
	int ans = 0;
	while(!q.empty()) {
		string x = q.front(); q.pop();
		ans++;
		cout << x << " ";
		if(ans == n) break;
		q.push(x + "0");
		q.push(x + "1");
	}
}

int main() {	// queue : sinh so nhi phan 1 2 3 4 5 ....
	//10
	//1 10 11 100 101 110 111 1000 1001 1010
	int n; cin >> n;
	solve(n);
	
	return 0;
}









