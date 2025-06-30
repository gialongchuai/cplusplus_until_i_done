#include<bits/stdc++.h>
using namespace std;

int main() { // covert danh sach ke sang danh sach canh
			//5		// 5 dinh
			//4 	// dinh 1 ke voi 4
			//3 4 5 // 2 ke voi 3 4 5
			//2 5 	// 3 ke 2 do 2 ke 3 above nen output khoi
			//1 2
			//2 3
			
			//1 4
			//2 3
			//2 4
			//2 5
			//3 5
	int n; cin >> n;
	cin.ignore();
	string s;
	map<int,set<int>> m;
	for(int i = 1; i <= n; i++) {
		getline(cin, s);
		stringstream ss(s);
		string word;
		while(ss >> word) {
			int x = stoi(word); // thay vi` dung` count coi ton tai
			if(m.count(x)) { // co the kiem tra xem so do co lon hon i  (tuc lon hon dong hien tai)
				bool flag = true; // neu lon hon cout ra i -> cout ra so lon hon done!
				set<int> tmp = m[x];
				if(tmp.count(i)) {
					flag = false;
				}
				if(flag) {
					m[i].insert(x);
				}
			} else {
				m[i].insert(x);
			}
		}
	}
	for(pair<int,set<int>> x : m) {
		set<int> s = x.second;
		set<int>::iterator it;
		for(it=s.begin(); it!=s.end(); it++) {
			cout << x.first << " " << *it << endl;
		}
	}
		
	return 0;
}













