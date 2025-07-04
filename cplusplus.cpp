#include<bits/stdc++.h>
using namespace std;

vector<int> ke[105];
int dinh, canh;
//int visited[105];
int degree[105];
queue<int> q;

void nhap() {
	cin >> dinh >> canh;
	for(int i=1; i<=canh; i++) {
		int x, y; cin >> x >> y;
		ke[x].push_back(y);
		//ke[y].push_back(x);
		degree[y]++;
	}
	
	for(int i=1; i<=dinh; i++) {
		sort(ke[i].begin(), ke[i].end());
	}
}

void Kahn() {
	queue<int> q;
	for(int i=1; i<=dinh; i++) { // 7 8 9 neu la` chu trinh` thi` khong bh duoc them de xet tai day
		if(degree[i] == 0) {
			cout << i << " ";
			q.push(i);
		}
	}
	
	vector<int> kq;
	while(!q.empty()) {
		int x = q.front();
		q.pop();
		kq.push_back(x);
		for(int v : ke[x]) {
			degree[v]--;	// giam bat cua dinh khi xoa dinh cha cua no
			if(degree[v] == 0) {	// neu dinh con giam bang 0 thi` push vao ket qua
				q.push(v);
			}
		}
	}
	cout << endl;
	for(int x : kq) cout << x << " ";
}

int main() { // Kahn : ap dung cung la do thi co huong
			// duyet ban bac == 0
	nhap();
	Kahn();
	
	//8 7 : do thi co huong voi 8 dinh va 8 canh tu` s toi t
	//1 2
	//1 5
	//2 3
	//2 4
	//4 6
	//3 6
	//7 8
	//1 7		// khong dinh nao di duoc den 1 va 7 nen mac dinh 2 dinh nay` bang == 0 va duoc 
	//1 7 2 5 8 3 4 6 			// push vao` q
	
	//9 9
	//1 2
	//1 5
	//2 3
	//2 4
	//4 6
	//3 6
	//7 8
	//8 9
	//9 7
	//1		// lo bo mat 7 8 9 neu 3 cai nay` la chu trinh` thi` ban bac la` 1
	//1 2 5 3 4 6		// co chu trinh` v.size != dinh
	
	// Note : co the kq.size neu == dinh thi` tuc la ko co chu trinh`
	
	return 0;
}
