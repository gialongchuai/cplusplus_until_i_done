#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b) {
	if(a.size()!=b.size()) {
		return a.size()>b.size();
	} else return a>b;
}

int main() { // tim` chuoi con lien tiep dai nhat
			// trung` in chuoi co tu dien lon hon
		//  zzaabcccyybc
		// => ccc
		// zzaab
		// => zz 
		// azbc
		// => z
		//zabccccc
		//= > ccccc
	string s; cin >> s;
	for(int i = 0; i<s.size() - 1; i++) {
		if(s[i] != s[i+1]) {
			i++;
			s.insert(i, " ");
		}
	}
	stringstream ss(s);
	string word;
	vector<string> v;
	while(ss >> word) {
		v.push_back(word);
	}
	sort(v.begin(),v.end(),cmp);
	cout << v[0];
	cout << endl;
	
	string x = s;
	string tmp = "";
	string res = "";
	res += x[0];
	for(int i = 1; i<x.size(); i++) {
		if(x[i] == res[0] && x[i] == x[i-1]) {
			res+=x[i];
		}
		else {
			tmp+=x[i];
			if(tmp.size() > res.size()) {
				res = "";
				res+=tmp;
				tmp = "";
			} else if(tmp.size() == res.size() && tmp > res) {
				res = "";
				res+=tmp;
				tmp = "";
			}
			if(tmp[0] != x[i+1]) tmp = "";
		}
	}
	cout << res << endl;
	
	string p = s + '@'; // them ki tu @ de xet vi tri size - 1 // zabccccc@ => @ != c update ccccc
	string tem = "";i // thi` nhay vao else de cap nhap chuoi cuoi ne thoa !!!!
	tem+=p[0];
	string ret = "";
	ret+=p[0];
	for(int i = 1; i<p.size();i++) {
		if(p[i] == p[i-1]) tem+=p[i];
		else {
			if(tem.size()>ret.size()) ret = tem;
			else if(tem.size() == ret.size() && tem > ret) ret = tem;
			tem = "";
			tem+=p[i];
		}
	}
	cout << ret;

	return 0;
}






