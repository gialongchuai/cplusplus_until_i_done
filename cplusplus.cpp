#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b){
	string x = a+b;
	string y = b+a;
	return x>y;
}

int main() {
		// cout so lon nhat co m chu so ma tong bang` s
		//	4 23
		// => 9950
		// 5 0
		// => NOT FOUND
	int m, s; cin >> m >> s;
	if(m==0) {
		cout << "NOT FOUND";
		return 0;
	}
	map<int,int> ma;
	int x = 9;
	while(s) {
		while(s-x>=0) {
			ma[x]++;
			s-=x;
		}
		x--;
	}
	
	map<int,int>::reverse_iterator it;
	int cnt = 0;
	string result = "";
	for(it = ma.rbegin(); it != ma.rend(); it++) {
		int x = (*it).second;
		for(int i = 0; i<x ;i++) {
			cnt++;
			result+= to_string((*it).first);
		}
	}
	if(cnt > m) {
		cout << "NOT FOUND";
		return 0;
	}
	
	int size_so = m - cnt;
	while(size_so--) {
		result.push_back('0');
	}
	int so = stoi(result); // 00000 => NOT FOUND
	string so_sanh = to_string(so);
	if(so_sanh.size() == result.size()) {
		cout << result;
	} else {
		cout << "NOT FOUND";
	}

	return 0;
}






