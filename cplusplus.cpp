#include <bits/stdc++.h>
using namespace std;

struct SV {
	string name;
	string birth;
	double gpa;
};

bool cmp(SV a, SV b) {
	return a.gpa > b.gpa;
}

int main() { // struct basic
			//4
			//Teo
			//22/12/2002
			//3.5
			//Ty
			//10/10/2001
			//2.5
			//Thuong
			//30/07/2002
			//2.8
			//Long
			//30/07/2002
			//2.8
			//Teo 22/12/2002 3.50
			//Ty 10/10/2001 2.50
			//Thuong 30/07/2002 2.80
			//Long 30/07/2002 2.80
			//Teo 22/12/2002 3.50
			//Thuong 30/07/2002 2.80
			//Long 30/07/2002 2.80
			//Ty 10/10/2001 2.50
	int n; cin >> n;
	SV a[n];
	for(int i = 0; i<n; i++) {
		cin.ignore();
		SV v;
		getline(cin,v.name);
		getline(cin,v.birth);
		cin >> v.gpa;
		a[i] = v;
	}
	for(SV v : a) {
		cout << v.name  << " " << v.birth << " " << fixed << setprecision(2) << v.gpa << endl;
	}
	
	sort(a, a+n, cmp);
		for(SV v : a) {
		cout << v.name  << " " << v.birth << " " << v.gpa << endl;
	}
	
	return 0;
}






