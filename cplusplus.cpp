#include<bits/stdc++.h>
using namespace std;

vector<int> ke[105];
int dinh, canh, s, t;
int parent[105], visited[105];

void nhap() {
	cin >> dinh >> canh >> s >> t;
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
			parent[x] = u; // nhung thang` con co gia tri cua cha
			DFS(x);
		}
	}
}

void BFS(int u) {
	queue<int> q;
	q.push(u);
	visited[u] = 1;
	while(!q.empty()) {
		int x = q.front(); q.pop();
		for(int e : ke[x]) {
			if(!visited[e]) {
				parent[e] = x;
				visited[e] = 1;
				q.push(e);
			}
		}
	}
}

int main() { // cout ra duong di bang DFS
		//5 3 4 3 			// tim` duong` di tu` 4 toi 3 khong co cout -1, co cout ra duong di
		//4 2
		//2 1
		//3 1
		
		// output : 
		// 3 1 2 4
		// 4 2 1 3
		
		// explain : trong moi con parent luon luu tru cha cua no
	nhap();
	BFS(s);
	if(!visited[t]) {
		cout << "-1"; // khong di duoc den t
	} else {
		vector<int> kq; // tao vector duong di chung to di duoc den t
		while (t!=s) {
			kq.push_back(t); 		// vi du 1 dc den 3, 4 thi 3 1 ; 4 1  => 4 di duoc den 7 thi 7 : 4 => 1 4 7
			t = parent[t]; 		// kq push dich 7 tuc dich truoc, xong gan lai t = parent[7] = 4 xong t = parent[4] = 1
		} // t gan lai de tiep tuc thang cha
		kq.push_back(t); // luc nay do while da den dich nen khong push_back dich' nen break while thi` push s hay t deu` dc
		for(int x : kq) cout << x << " "; 		// 3 1 2 4
		reverse(kq.begin(), kq.end());
		cout << endl;
		for(int x : kq) cout << x << " "; 		// 4 2 1 3
	}
	
	return 0;
}







