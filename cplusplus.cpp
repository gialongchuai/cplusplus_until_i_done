#include <bits/stdc++.h>
using namespace std;

struct SV {
	string name;
	string birth;
	double gpa;
	double *diem;
	SV(){
		
	}
	
	SV(string n, string b, double g) {
		name = n;
		birth = b;
		gpa = g;
	}
	
	void in() {
		cout << name << " " << birth << " " << gpa << endl;
	}
};

struct SV01 {
	string name;
	double *diem;
};

int main() { // struct basic
			// liet ke sinh vien sinh vao thang 04
	SV v("Nguyen Van A", "12/12/1997", 2.5);
	v.in(); // => Nguyen Van A 12/12/1997 2.5
	
	SV *ptr = &v;
	cout << ptr->name << " " << ptr->birth << " " << ptr->gpa << endl; // Nguyen Van A 12/12/1997 2.5
	cout << (*ptr).name << " " << (*ptr).birth << " " << (*ptr).gpa << endl; // Nguyen Van A 12/12/1997 2.5
	
	int x[100]; // cap phat tinh~ // stack
	int *b = new int[100]; // cap phat dong cho con tro b quan ly; // heap = RAM may tinh
	for(int i = 0; i < 5; i++) {
		cin >> b[i]; // 3 2 1 4 2
	}
	for(int i = 0 ; i<5; i++) {
		cout << b[i] << " "; // 3 2 1 4 2
	}
	cout << endl;
	delete []b; // dung` xong xoa tranh leak memory

	SV *ptr01 = new SV;
	ptr01->name = "Nguyen Van B";
	ptr01->birth = "22/12/1995";
	ptr01->gpa = 2.9;
	cout << ptr01->name << " " << ptr01->birth << " " << ptr01->gpa << endl; // Nguyen Van B 22/12/1995 2.9
	cout << (*ptr01).name << " " << (*ptr01).birth << " " << (*ptr01).gpa << endl; // Nguyen Van B 22/12/1995 2.9
	
	delete ptr01;
	
	cin.ignore();
	
	SV test;
	string name, birth;
	getline(cin,name);
	getline(cin, birth);
	test.name = name;
	test.birth = birth;
	test.diem = new double[5]; // luu y cap phat truoc khi nhap; khong dong` nay` khong loi
	for(int i = 0 ; i < 5; i++) { // hinh` nhu constructor new dum` roi` :vvvv
		cin >> test.diem[i]; 
	}
	for(int i = 0; i<5; i++) {
		cout << test.diem[i] << " ";
	}
	cout <<endl;
	
	delete []test.diem; // giai phong sau khi dung`
	
	SV01 *p = new SV01;
	p->diem = new double[5]; // loi neu khong co dong nay` !!!!!! sure error without
	for(int i = 0 ; i<5; i++) {
		cin >> p->diem[i];
	}
	cout << endl;
	delete []p->diem;
	
	SV01 p1;
	p1.diem = new double[5]; // loi neu khong co dong` nay` !!!!!! sure error without
	for(int i = 0 ; i<5; i++) {
		cin >> p1.diem[i];
	}
	delete []p1.diem;
	
	return 0;
}






