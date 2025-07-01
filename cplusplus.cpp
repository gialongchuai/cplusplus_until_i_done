#include<bits/stdc++.h>
using namespace std;

int dinh, canh;
vector<int> ke[1005];
int visited[105];

void nhap() {
	cin >> dinh >> canh;
	for(int i=1; i<=canh; i++) {
		int x, y; cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	for(int i=1; i<=dinh; i++) { // mac dinh danh sach dinh ke trong ma tran ke cua tung dinh
		sort(ke[i].begin(), ke[i].end()); // tang dan 
	}
}

void BFS(int u) {
	queue<int> q;
	q.push(u);
	visited[u] = 1;
	while(!q.empty()) {
		int e = q.front();
		q.pop();
		for(int x : ke[e]) {
			if(!visited[x]) {
				q.push(x);
				visited[x] = 1;
			}
		}
	}
}

int main() { // bfs : breath first search : tim kiem theo chieu rong
		//6 3
		//1 2
		//2 3
		//3 4
		//
		//3
		
		// cout : thanh phan lien thong trong do thi, do 5 6 co don duyet rong khong toi dc
	nhap();
	int cnt = 0;
	for(int i=1; i<=dinh; i++) {
		if(!visited[i]) {
			++cnt;
			BFS(i);
		}
	}
	cout << endl << cnt;
	
	return 0;
}




