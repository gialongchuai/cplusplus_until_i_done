#include <bits/stdc++.h>
using namespace std;

int a[100][100];
int n;
int used[100];
bool check = true;
string s = "";

void Try(int i, int j) {
	if(i==n && j==n) {
		cout << s << endl;
		check = false;
		return;
	}
	
	if(i+1 <=n && a[i+1][j] == 1) {
		s+="D";
		Try(i+1,j);
		s.pop_back();
	}
	if(j+1 <=n && a[i][j+1] == 1) {
		s+="R";
		Try(i,j+1);
		s.pop_back();
	}
}

int main() { // con chuot tu 1:1 di den n:n, neu khong di den cout -1
	cin >> n;
	for(int i = 1; i<=n; i++) {
		for(int j = 1; j<=n; j++) {
			cin >> a[i][j];
		}
	}
	cout << endl;
	Try(1,1);
	if(check) {
		cout << -1;
	}
	
	return 0;
}












