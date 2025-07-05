#include<bits/stdc++.h>
using namespace std;

vector<int> ke[105];
int dinh, canh;
int visited[105];

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
	for(int v : ke[u]) {
		if(!visited[v]) {
			DFS(v);
		}
	}
}

int main(){ // do thi co phai la 1 cay 
			// canh != dinh - 1 and phai lien thong 
	//4 3
	//1 2
	//2 3
	//3 1
	//Khong phai cay
	
	//5 4
	//1 2
	//2 3
	//2 4
	//4 5
	//La cay
	nhap();
	
	if(canh != dinh - 1) {
		cout << "Khong phai cay";
		return 0;
	}
	
	DFS(1); // bat dau duyet tu` 1 neu la` cay thi` visited == 1 het trong lan dau` duyet
	for(int i=1; i<=dinh; i++) {
		if(!visited[i]) {
			cout << "Khong phai cay";
			return 0;
		}
	}
	cout << "La cay";
	
	return 0;
}








