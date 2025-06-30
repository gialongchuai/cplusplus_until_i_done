#include<bits/stdc++.h>
using namespace std;

int dinh, canh;
vector<int> ke[1005];
int visited[500];

void nhap() {
	cin >> dinh >> canh;
	for(int i=1; i<=canh; i++) {
		int x, y; cin >> x >> y;
		ke[x].push_back(y); // do thi vo huong neu 2 ke 3 
		ke[y].push_back(x); // thi` 3 ke 2
	}
	for(int i=1; i<=dinh; i++){ // mac dinh khi loan phai loan dinh ke nho toi lon
		sort(ke[i].begin(),ke[i].end()); // sort no ngay tu` dau`
	}
}

void DFS(int u) {
	visited[u] = 1; // tham dinh do roi` khong tham nua 
	for(int x : ke[u]) {
		if(visited[x] == 0){ // neu chua tham di tham 
			DFS(x); // loang theo chieu` sau
		}
	}
}

int main() { // dfs : deep first search : duyet theo chieu sau cua dinh can tim
			// dem thanh phan lien thong
			//5 2 		// 5 dinh nhung chi co 2 canh duoc ke
			//4 1
			//2 1
			//3 		// output 3 do 1 co the loan 2 4 con` 3 va 5 co don
			//
			//5 4		// 5 dinh nhung chi co 4 canh duoc ke
			//4 1
			//2 1
			//3 2
			//4 3
			//2			// output 2 do 1 co the loan duoc 2 3 4 nhung 5 co don
	nhap();
	int cnt = 0;
	for(int i=1; i<=dinh; i++) {
		if(visited[i] == 0) { // loan tu` dinh hien tai
			cnt++;
			DFS(i);
		}
	}
	cout << cnt;
		
	return 0;
}













