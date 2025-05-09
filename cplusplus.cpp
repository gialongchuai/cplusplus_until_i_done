#include <bits/stdc++.h>
using namespace std;

int main() { // basic string
	string s3 = "xin chao";
	s3 += " the";
	s3 = s3 + " gioi";
	cout << s3 << endl; // xin chao the gioi
	
	s3 = s3 + '@';
	s3 += '@';
	cout << s3 << endl; // xin chao the gioi@@
	
	string s4 = s3 + "hello world" + '%';
	cout << s4 << endl; // xin chao the gioi@@hello world%
	
	s4+= "####" + 'l'; // ERROR + them char !!!!!!!!!!!!!
	cout << s4 << endl; // xin chao the gioi@@hello world%· Çn· Çn· Çn· Çn· Pn· am· @n· ¦m·
	
	string s = "hello world!";
	cout << s << endl;
	for(int i = 0; i <s.size(); i++) {
		cout << s[i];
	}		
	cout << endl;
	for(char x : s) {
		cout << x;
	}
	cout << endl;
	
	string s1;
	cin >> s1; // nhap chuoi khong dau cach : 28tech hoc lap trinh
	cout << s1 << endl; // => 28tech
	
	string s2;
	getline(cin,s2); // doc toi enter
	cout << s2 << endl; // " hoc lap trinh"
	
	string t;
	cin >> t; // "hello";
	cout << t << endl;
	string x;
	getline(cin,x);
	cout << x << endl; // xau rong do doc enter cua luong` cin >> t
	cout << x.size() << endl; // 0
 
 	string t1; // "world"
 	cin >> t1;
 	cout << t1 << endl;
 	cin.ignore(); // loai bo 1 ki tu, cin.ignore(2) = loai bo 2 ki tu (enter + 1 ki tu sau dos)
 	string x1;
 	getline(cin,x1); // "hoc lap trinh"
 	cout << x1 << endl;
 
 	string x2;
 	getline(cin,x2); // "29tech lap trinh hoc"
 	cout << x2 << endl; // 29tech lap trinh hoc : khong can ignore do getline tai x1 da xu ly enter
 	string::iterator it;
 	for(it = x2.begin(); it!=x2.end(); it++) {
 		cout << *it; // 29tech lap trinh hoc
	}
	cout << endl;
	
	sort(x2.begin(), x2.end());
	cout << x2 << endl; // "   29accehhhilnoprtt"
	
	sort(x2.begin(), x2.end(), greater<char>()); // luu y tung char trong chuoi string
	cout << x2 << endl; // "ttrponlihhhecca92   "
 	
	return 0;
}






