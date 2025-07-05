#include<bits/stdc++.h>
using namespace std;

vector<int> ke[105], t_ke[105];
int dinh, canh;
int visited[105];
stack<int> s;

void nhap() {
	cin >> dinh >> canh;
	for(int i=1; i<=canh; i++) {
		int x, y; cin >> x >> y;
		ke[x].push_back(y);
		t_ke[y].push_back(x);
	}
}

void DFS(int u) {
	visited[u] = 1;
	for(int v : ke[u]) {
		if(!visited[v]) {
			DFS(v);
		}
	}
	s.push(u);
}

void DFS2(int u) {
	cout << u << " ";
	visited[u] = 1;
	for(int v : t_ke[u]) {
		if(!visited[v]) {
			DFS2(v);
		}
	}
}

int main() {	// do thi lien thong manh neu chon random 2 dinh trong do thi luon co road
			// thanh phan lien thong manh tuc la do thi khong lien thong manhc chia thanh nhieu
			// thanh` phan` lien thong manh
			// neu dem ma thanh phan lien thong manh == 1 tuc la` do thi lien thong manh\
			
	// Kosaraju
	nhap();
	for(int i=1; i<=dinh; i++) {
		if(!visited[i]) {
			DFS(i);
		}
	}
	
	memset(visited, 0, sizeof(visited));
	while(!s.empty()) {
		int x = s.top(); s.pop();
		if(!visited[x]) {
			DFS2(x);
			cout << endl;
		}
	}
	//8 9	// 8 dinh voi 9 canh ke cho do thi co huong
	//1 2
	//2 3
	//3 8
	//8 1
	//3 4
	//4 5
	//5 6
	//6 7
	//7 5
	
	//		output : 3 thanh` phan` lien thong manh		notice : > 1 nen 
	//1 8 3 2							khong phai la` do` thi lien thong manh
	//4
	//5 7 6
	
 	return 0;
}












