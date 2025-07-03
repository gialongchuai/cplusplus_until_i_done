#include<bits/stdc++.h>
using namespace std;

vector<int> ke[105];
int dinh, canh;
int visited[105], parent[105];

int check = 0;

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
		if(visited[x]==1 && x!=parent[u]) { // neu quay lai cha tuc da vieng tham cha roi` == 1
			check = 1;		// and : thang dang xet khong duoc ke ben thang cha (tuc ko phai 2 dinh ke nha)
		}
		
		if(!visited[x]) {
			parent[x] = u; // danh dau all con co cha la` u
			DFS(x);
		}
	}
}

int main() { // chu trinh: vong tron va khong dc 2 dinh ke nhau
			// tu` cha di toi con loang loang ma quay lai. cha la` lum.
	nhap();
	for(int i=1; i<=dinh; i++) { // duyet tung thanh` phan` lien thong, neu bat dau` voi dinh 1 
		if(!visited[i]) { // khong theo tao tu` 1, nhung khi loang den 2 ma 2 loang den con quay lai dc 2
			DFS(i); // lap tuc danh dau check = 1 chu khong phai xet tung dinh?
		}
	}
	if(check) cout << "1";
	else cout << "-1";

	//5 3
	//2 1
	//3 4
	//4 5
	//-1
	//
	//10 11
	//10 5
	//10 4
	//10 1
	//10 3
	//5 2
	//5 4
	//10 8
	//5 3
	//5 1
	//10 6
	//10 9
	//1
	return 0;
}







