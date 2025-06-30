#include<bits/stdc++.h>
using namespace std;

int dinh, canh, timkiem;
vector<int> ke[1005];
int visited[500];

void nhap() {
	cin >> dinh >> canh >> timkiem;
	for(int i=1; i<=canh; i++) {
		int x, y; cin >> x >> y;
		ke[x].push_back(y); // do thi vo huong neu 2 ke 3 
		ke[y].push_back(x); // thi` 3 ke 2
	}
	for(int i=1; i<=dinh; i++) { // thong nhat : voi moi dinh ke 
		sort(ke[i].begin(), ke[i].end()); // sap xep tang dan vi du ds ke cua 2 : 5 3 4 => 2 : 3 4 5
	}	
}

void DFS(int u) {
	cout << u << " ";
	visited[u] = 1; // tham dinh do roi` khong tham nua 
	for(int x : ke[u]) {
		if(visited[x] == 0){ // neu chua tham di tham 
			DFS(x); // loang theo chieu` sau
		}
	}
}

int main() { // dfs : deep first search : duyet theo chieu sau cua dinh can tim
	nhap();
	DFS(timkiem); // bat dau duyet dinh can tim
		
	return 0;
}













