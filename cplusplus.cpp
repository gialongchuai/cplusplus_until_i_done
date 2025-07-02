#include<bits/stdc++.h>
using namespace std;

vector<int> ke[105];
int visited[105];
int dinh, canh;
void BFS(int u);
int tplt[105];
int cnt = 0;

void nhap() {
	cin >> dinh >> canh;
	for(int i=1; i<=canh; i++) {
		int x, y; cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	for(int i=1; i<=dinh; i++) {
		sort(ke[i].begin(), ke[i].end());
	}
	for(int i=1; i<=dinh; i++) { // chay 1 lan duy nhat xet thanh phan lien thong
		if(!visited[i]) {		// tranh danh vao` while time limit
			++cnt;
			BFS(i);
		}
	}
	int tv; cin >> tv;
	while(tv--) {
		int x, y; cin >> x >> y;
		memset(visited, 0, sizeof(visited)); // sau khi chay moi truy van cho visited thanh` 0 het
		if(tplt[x] == tplt[y]) cout << "1" << endl; // neu bang nhau tplt tuc tu` x den dc y
		else cout << "-1" << endl;
	}
}

void BFS(int u) {
	queue<int> q;
	q.push(u);
	visited[u] = 1;
	while(!q.empty()) {
		int x = q.front();
		q.pop();
		tplt[x] = cnt;
		for(int e : ke[x]) {
			if(!visited[e]) {
				visited[e] = 1;
				q.push(e);
			}
		}
	}
}

int main() { // 
	//5 3 		// 5 dinh 3 canh
	//5 4
	//4 1
	//4 3
	//3			// 3 tv : cout 1 di dc, -1 khong duoc
	//4 5		// 1
	//4 2		// -1
	//3 4		// 1
	nhap();
	
	return 0;
}




