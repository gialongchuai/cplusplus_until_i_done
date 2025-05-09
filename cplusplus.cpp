#include <bits/stdc++.h>
using namespace std;

int main() { // chuan hoa email va mat khau
			//2
			//nguyen  VAN  NAM    02/07/2002
			//namnv@xyz.edu.vn
			//272002
			//le THI  HONG nHUNG 8/02/1991
			//nhunglth@xyz.edu.vn
			//821991
	int n; cin >> n; cin.ignore();
	while(n--) {
		string s;
		getline(cin,s);
		for(char &x : s) {
			x = tolower(x);
		}
		stringstream ss(s);
		string word;
		vector<string> v;
		while(ss >> word) {
			v.push_back(word);		
		}
		int n = v.size();
		string email = v[n-2];
		for(int i = 0; i < n-2; i++) {
			email += v[i][0]; // lay chu cai dau tien trong tung ki tu
		}
		cout << email << "@xyz.edu.vn" << endl; 
		string ns = v[n-1];
		stringstream zz(ns);
		string token;
		while(getline(zz,token,'/')) {
			int x = stoi(token);
			cout << x;
		}
		
		cout << endl;
	}
	
	return 0;
}






