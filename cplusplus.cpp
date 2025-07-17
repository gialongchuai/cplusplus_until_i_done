#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b) {
	return a.size() < b.size();
}

int main() { // dem sau con co day du ki tu khac nhau va` ngan nhat
	//abcaaaabcad
	//4
	//bcad abcad aabcad aaabcad aaaabcad caaaabcad bcaaaabcad abcaaaabcad => cout v[0]
	string s; cin >> s;
	set<char> se;
	for(char x : s) {
		se.insert(x);
	}
	int l = 0;
	vector<string> v;
	map<char, int> m;
	int ans = 1e9;
	int cnt = 0;
	string result = "";
	for(int r=0; r<s.size(); r++) {
		result += s[r];
		m[s[r]]++; // tang so luong ki tu xuat hien
		if(m[s[r]] == 1) cnt++; // lon hon 1 van khong tinh do da tinh bang 1 roi`
		while(cnt == se.size()) {
			v.push_back(result);
			result.erase(0,1); // left tang tinh tien nen xoa 0,1
			ans = min(ans, r-l+1); // chieu dai xau thoa
			m[s[l]]--;
			if(m[s[l]] == 0) cnt--; // bang 0 tuc thieu se.size() != cnt
			l++;
		}
	}
	cout << ans << endl;
	sort(v.begin(), v.end(),cmp); // sort ngan
	for(string x : v) cout << x << " ";

    return 0;
}




