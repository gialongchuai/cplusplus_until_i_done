#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n; 
    while(n--) {
        int c; cin >> c;
        string s; cin >> s;
        map<char,int> m;
        for(char x : s) {
            if(m.count(x) == 0) {
                m[x]+=2;
            } else {
                m[x]+=1;
            }
        }
        int ans = 0;
        for(auto x : m) {
            ans += x.second;
        }
        cout << ans << endl;
    }

    return 0;
}
