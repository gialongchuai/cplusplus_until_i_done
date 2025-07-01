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
		ke[y].push_back(x);
	}
	for(int i=1; i<=dinh; i++) { // mac dinh danh sach dinh ke trong ma tran ke cua tung dinh
		sort(ke[i].begin(), ke[i].end()); // tang dan 
	}
}

void BFS(int u) {
	queue<int> q; // tao hang doi
	q.push(u);		// day dinh vao hang doi
	visited[u] = 1;		// danh giau vieng tham no roi`
	while(!q.empty()) {			// khi ma chua rong 
		int x = q.front();		// in ra thang dau` hang` doi 
		q.pop();		
		cout << x << " ";
		for(int e : ke[x]) { 	// xong tham tat ca dinh ke voi dinh dau` hang` doi 
			if(!visited[e]) {	// them vao hang doi 
				q.push(e);		// ouput la nhung dinh gan thang` dau` hang` doi cout ra truoc 
				visited[e] = 1;
			}
		}
	}
}

int main() { // bfs : breath first search : tim kiem theo chieu rong
		//5 7 5			// 5 dinh voi 7 canh duoc ke , tim kiem 5 lan theo chieu rong
		//4 1
		//5 3
		//4 3
		//5 1
		//3 2
		//4 2
		//2 1
		
		//5 1 3 2 4
	nhap();
	BFS(timkiem);
	
	return 0;
}




