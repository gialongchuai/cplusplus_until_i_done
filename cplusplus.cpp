#include<bits/stdc++.h>
using namespace std;

int main() { // tim chuoi con dai` nhat khong lien tiep cua 3 xau
			//AGLEHHGE
			//GLGHLALB
			//DDLBLEHGD
			//
			// AGLEHHGE  GLGHLALB  DDLBLEHGD
			//8 8 9
			//2
	string s, t, z; cin >> s >> t >> z;
	int n=s.size(), m=t.size(), k=z.size();
	s = " " + s;
	t = " " + t;
	z = " " + z;
	cout << endl << s << " " << t << " " << z << endl;
	cout << n << " " << m << " " << k << endl;
	int F[50][50][50] = {0};
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++) {
			for(int o=1; o<=k; o++) {
				if(s[i] == t[j] && t[j] == z[o]){
					F[i][j][o] = F[i-1][j-1][o-1] + 1;
				} else {
					F[i][j][o] = max(F[i-1][j][o],max(F[i][j-1][o],F[i][j][o-1]));
				}
			}
		}
	}
	cout << F[n][m][k];
	
	return 0;
}










