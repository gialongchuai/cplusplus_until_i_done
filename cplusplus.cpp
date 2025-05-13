#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string,int> a, pair<string,int> b) {
	if(a.second!=b.second) {
		return a.second > b.second;
	} else return a.first < b.first;
}

int main() { // sap xep tong ban thang giam dan
			// trung` in theo thu tu tu` dien?
			Barca 3 - 18 Man City
			//28Tech Football Club 5 - 19 Newcastle United
			//Chelsea 6 - 0 Newcastle United
			//28Tech Football Club 18 - 12 Liverpool
			//Manchester United 13 - 13 Aston Villa
			//Arsenal 19 - 0 Aston Villa
			//Barca 19 - 15 Man City
			//Manchester United 19 - 6 Aston Villa
			//Manchester United 19 - 13 Aston Villa
			//Chelsea 15 - 3 Liverpool
			//^Z
			//Manchester United 51
			//Man City 33
			//Aston Villa 32
			//28Tech Football Club 23
			//Barca 22
			//Chelsea 21
			//Arsenal 19
			//Newcastle United 19
			//Liverpool 15
	string s;
	vector<string> v;
	while(getline(cin,s)) {
		stringstream ss(s);
		string word;
		while(getline(ss,word,'-')) {
			v.push_back(word);
		}
	}
	
	map<string,int> m;
	for(int i = 0; i<v.size(); i++) {
		if(i%2==0) {
			stringstream ss(v[i]);
			string word;
			vector<string> tmp;
			while(ss>>word) {
				tmp.push_back(word);
			}
			string ten_db = "";
			for(int i = 0; i<tmp.size() - 1; i++) {
				if(i!=tmp.size()-2) {
					ten_db += tmp[i] + " ";
				} else {
					ten_db += tmp[i];
				}
			}
			int so_ban = stoi(tmp[tmp.size()-1]);
			if(m.count(ten_db)) {
				int x = m[ten_db];
				so_ban+=x;
				m[ten_db] = so_ban;
			} else {
				m.insert({ten_db,so_ban});
			}
		} else {
			stringstream ss(v[i]);
			string word;
			vector<string> tmp;
			while(ss>>word) {
				tmp.push_back(word);
			}
			string ten_db = "";
			for(int i = 1; i<tmp.size(); i++) {
				if(i!=tmp.size()-1) {
					ten_db += tmp[i] + " ";
				} else {
					ten_db += tmp[i];
				}
			}
			int so_ban = stoi(tmp[0]);
			if(m.count(ten_db)) {
				int x = m[ten_db];
				so_ban+=x;
				m[ten_db] = so_ban;
			} else {
				m.insert({ten_db,so_ban});
			}
		}
	}
	vector<pair<string,int>> v_pair;
	for(pair<string,int> x : m) {
		v_pair.push_back(x);
 	}
 	sort(v_pair.begin(),v_pair.end(),cmp);
	for(pair<string,int> x : v_pair) {
		cout << x.first << " " << x.second << endl;
	}
	
	return 0;
}






