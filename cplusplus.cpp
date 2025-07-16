#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    while(n--) {
        int c; cin >> c;
        map<string,int> m;
        string x[c];
        string y[c];
        string z[c];
        for(int i=0; i<c; i++) {
            string s; cin >> s;
            m[s]++;
            x[i] = s;
        }
        for(int i=0; i<c; i++) {
            string s; cin >> s;
            m[s]++;
            y[i] = s;
        }
        for(int i=0; i<c; i++) {
            string s; cin >> s;
            m[s]++;
            z[i] = s;
        }
        int ans = 0;
        for(string e : x) {
            if(m[e] == 1) ans+=3;
            else if(m[e] == 2) ans+=1;
            else ans+=0;
        }
        cout << ans << " "; ans = 0;
        for(string e : y) {
            if(m[e] == 1) ans+=3;
            else if(m[e] == 2) ans+=1;
            else ans+=0;
        }
        cout << ans << " "; ans = 0;
        for(string e : z) {
            if(m[e] == 1) ans+=3;
            else if(m[e] == 2) ans+=1;
            else ans+=0;
        }
        cout << ans << " " << endl;
    }

    return 0;
}

