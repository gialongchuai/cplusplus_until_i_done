#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    while(n--) {
        int c; cin >> c;
        map<string,int> m;
        vector<string> v;
        for(int i=0; i<c; i++) {
            string s; cin >> s;
            v.push_back(s);
            m[s]++;
        }
        for(string s : v) {
            bool check = false;
            for(int i=1; i<s.size(); i++) {
                string a = s.substr(0,i);
                string b = s.substr(i, s.size());
                if(m.count(a) && m.count(b)) {
                    check = true;
                    break;
                }
            }
            if(check) cout << "1";
            else cout << "0";
        }
        cout << endl;
    }

    return 0;
}
