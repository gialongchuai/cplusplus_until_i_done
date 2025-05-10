#include <bits/stdc++.h>
using namespace std;

vector<string> v;
bool cmp (string a, string b) {
	if(a.size() != b.size()) {
		return a.size() < b.size();
	}else {
		vector<string>::iterator it;
		for(it = v.begin();it!= v.end();it++) {
			if(*it == a) {
				vector<string>::iterator it1;
				for(it1 = v.begin(); it1!=v.end(); it1++) {
					if(*it==b) return (it - v.begin()) < (it1 - v.begin());
				}
			}
		}
	}
}

bool cmp_02(string a, string b) {
	return a.size() < b.size();
}

int main() { // cout dk: sap xep theo chieu dai cua chuoi thuan nghich "KHAC NHAU"
			// trung` length thi` in theo thu tu index trong chuoi nhap ban dau`
			//php aba aaaa nguyen aba huu hoc pop
			//^Z
			//php aba pop aaaa
	string s;
	set<string> se;
	while(cin >> s) {
		string tmp = s;
		reverse(tmp.begin(), tmp.end());
		if(s == tmp) {
			if(!se.count(s)) v.push_back(s);
			se.insert(s);
		}
	}
	vector<string> bp_v = v;
	
	sort(v.begin(),v .end(),cmp); // cach_01 do forgot cach 02 ;)))
	for(string x : v) {
		cout << x << " ";
	}
	cout << endl;
												// cach_02_bp
	stable_sort(bp_v.begin(), bp_v.end(), cmp_02); // stable_sort dam bao tinh on dinh chuoi nhap
	for(string x : bp_v) {
		cout << x << " ";
	}
	
	return 0;
}






