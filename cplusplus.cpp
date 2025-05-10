#include <bits/stdc++.h>
using namespace std;

int main() { // cout tang dan theo thu tu tu` dien?
			// khong phan biet hoa thuong
			//abc abc abcd abcd AB
			//abC CD ZAH abd ABcD
			// => abc abcd
	string a, b;
	getline(cin,a);
	getline(cin,b);
	for(char &x : a) {
		x = tolower(x);
	}
	for(char &x : b) {
		x = tolower(x);
	}
	
	set<string> se_a;
	set<string> se_b;
	stringstream ss_a(a);
	string word_a;
	while(ss_a>>word_a) {
		se_a.insert(word_a);
	}
	
	stringstream ss_b(b);
	string word_b;
	while(ss_b>>word_b) {
		se_b.insert(word_b);
	}
	for(string x : se_a) {
		if(se_b.count(x)) {
			cout << x << " ";
		}
	} 

	return 0;
}






