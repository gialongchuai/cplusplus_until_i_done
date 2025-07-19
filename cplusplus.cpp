#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    cin.ignore();
    map<string,int> m;
    for(int i=0; i<n; i++) {
        string s; cin >> s;
        m[s]++;
        if(m.count(s) && m[s] == 1) cout << "OK" << endl;
        else {
            int x = m[s];
            cout << s << x-1 << endl;
        }
    }

    return 0;
}

