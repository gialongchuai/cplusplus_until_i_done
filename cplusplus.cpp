#include<bits/stdc++.h>
using namespace std;

vector<int> ke[105];
int dinh, canh;
int visited[105];
stack<int> s;

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
}

void DFS(int u) {
	visited[u] = 1;
	for(int x : ke[u]) {
		if(!visited[x]) {
			DFS(x);
		}
	}
	// xong vong for tuc la da di den dinh cuoi
	//bat dau push vao` stack xong quay lui do de quy
	s.push(u); // tuc la push 4 la dinh cuoi roi` 6 3 2 5 1
}	// cout lan luot top truoc tuc  1 5 2 3 6 4

	//6 6			// 6 dinh voi 6 canh ke voi do thi co huong
	//1 2
	//2 3
	//2 4
	//3 6
	//4 6
	//1 5
	//1 5 2 3 6 4

int main() { // topo : topological sorting
			// ap dung cho do thi co huong khong co chu trinh, dinh nay` phai dung sau dinh kia
	nhap();
	for(int i=1; i<=dinh; i++) {
		if(!visited[i]) {
			DFS(i);
		}
	}
	// duyet thuat toan topo di tu` thang` top cua stack
	while(!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}
	
	return 0;
}
