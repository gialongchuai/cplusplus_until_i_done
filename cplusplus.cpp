#include <bits/stdc++.h>
using namespace std;

string chuan_hoa_ten(string name) {
	string name_result = "";
	stringstream ss(name);
	string word;
	while(ss >> word) {
		name_result += toupper(word[0]);
		for(int i =1; i<word.size() ;i++) {
			name_result += tolower(word[i]);
		}
		name_result += ' ';
	}
	name_result.pop_back(); // loai bo space cuoi'
	return name_result;
}

string chuan_hoa_ngay_sinh(string birth) {
	string birth_result = "";
	stringstream ss(birth);
	string word;
	while(getline(ss, word, '/')) {
		if(word.size() == 1) word.insert(0, "0");
		birth_result += word + '/';
	}
	
	birth_result.pop_back(); // loai bo / cuoi'
	return birth_result;
}

int main() { // chuan hoa sinh vien: NgUYEN   Van  TECH28
									//1/1/2022
								// Nguyen Van Tech28
								// 01/01/2022	
	string name, birth;
	getline(cin, name);
	getline(cin, birth);
	
	string bp_birth = birth;
	
	string name_result = chuan_hoa_ten(name);
	string birth_result = chuan_hoa_ngay_sinh(birth);
	cout << name_result << endl << birth_result;
	
	if(bp_birth[1] == '/') bp_birth = "0" + bp_birth;
	if(bp_birth[4] == '/') bp_birth.insert(3,"0");
	cout << endl << bp_birth;
	
	return 0;
}






