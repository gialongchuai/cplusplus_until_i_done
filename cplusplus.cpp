#include<bits/stdc++.h>
using namespace std;

int dinh, canh;
vector<int> ke[105];
int visited[105];

void nhap() {
	cin >> dinh >> canh;
	for(int i=1; i<=canh; i++) {
		int x, y; cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	for(int i=1; i<=dinh; i++) {
		sort(ke[i].begin(),ke[i].end());
	}
}

void DFS(int u) {
	visited[u] = 1;
	for(int x : ke[u]) {
		if(!visited[x]) {
			DFS(x);
		}
	}
}

int main() { // dinh tru : la bo dinh nay` ra lam` tang thanh` phan`
			// lien thong cua do thi
	nhap();
	
	//b1: dem thanh phan lien thong ban dau de xiu' so sanh xem
	// xoa moi dinh neu co lam tang thanh phan lien thong tuc la dinh tru
	int cnt = 0;
	for(int i=1; i<=dinh; i++) {
		if(!visited[i]) {
			cnt++;
			DFS(i);
		}
	}
	
	// bat dau xoa dinh do khoi do` thi
	// tuc trong ke[105]  xoa cua dinh i va xoa luon cac dinh con` lai ma` co i trong do
	// bp : danh dau visited cua no la 1 de no khong xet, cung nhu cac dinh khac
	// ke vs no cung khong xet
	int tru = 0;
	for(int i=1; i<=dinh; i++) { 
		memset(visited, 0, sizeof(visited)); // reset ve 0 de toi dinh khac danh dau 
		visited[i] = 1; // danh dau de khong xet, tuc loai bo khoi do` thi
		int dem = 0;	// dem thanh phan lien thong sau khi loai bo dinh do
		for(int j=1; j<=dinh; j++) {
			if(!visited[j]) {
				dem++;
				DFS(j);
			}
		}
		if(dem > cnt) { // neu lon hon lam tang thanh phan lien thong do thi
			cout << i << " ";
			tru++;
		}
	}
	cout << endl << tru;
	
	//10 6 // bai toan cho 10 dinh voi 6 canh ke
	//5 4
	//5 2
	//10 2
	//10 7
	//5 3
	//10 1
	//2 5 10		// loai bo 2 or 5 or 10 (dinh tru) lam` tang so thanh phan lien thong cua do thi
	//3
	
	return 0;
}







