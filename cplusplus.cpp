#include<bits/stdc++.h>
using namespace std;

int dinh, canh, timkiem;
vector<int> ke[1005];
int visited[105];

void nhap() {
	cin >> dinh >> canh >> timkiem;
	for(int i=1; i<=canh; i++) {
		int x, y; cin >> x >> y;
		ke[x].push_back(y);
//		ke[y].push_back(x);
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
		cout << e << " ";
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
		//5 7 5
		//4 1
		//5 3
		//4 3
		//5 1
		//3 2
		//4 2
		//2 1
		//5 1 3 2
		// do thi co huong, khong co dinh nao vao` duoc 4 nen ouput above
	nhap();
	BFS(timkiem);
	
	return 0;
}




