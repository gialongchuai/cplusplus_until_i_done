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
		//ke[y].push_back(x); // thi` 3 ke 2
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

void ds_ke() {
	cout << endl;
	for(int i=1; i<=dinh; i++) {
		cout << i << " : ";
		for(int x : ke[i]) {
			cout << x << " ";
		}
		cout << endl;
	}
}

int main() { // dfs : deep first search : duyet theo chieu sau cua dinh can tim
			// do thi co huong
			//5 5 3 	// 5 dinh 5 canh ; tim` kiem 3 
			//5 2
			//3 2
			//5 4
			//5 3
			//5 1
			
			//3 2 5 1 4 	// explain: 3 co 2, 2 co 3 voi co 5
							// ma` 3 tham roi` nen di 5
			//1 : 5			// 5 di 1 xong 1 di 5 roi` nen 5 di them 4.
			//2 : 3 5
			//3 : 2 5
			//4 : 5
			//5 : 1 2 3 4
	nhap();
	DFS(timkiem); // bat dau duyet dinh can tim
	ds_ke();
		
	return 0;
}
