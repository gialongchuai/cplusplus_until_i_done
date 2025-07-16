#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    while(n--) {
        int x, y; cin >> x >> y;
        map<int,vector<int>> m;
        for(int i=1; i<=x; i++) {
            int p; cin >> p;
            m[p].push_back(i);
        }
        while(y--) {
            int t, q; cin >> t >> q;
            if(m.count(t) && m.count(q)) {
                int s1 = m[t].front();
                int s2 = m[q].back();
                if(s1 < s2) cout << "YES";
                else cout << "NO";
            } else {
                cout << "NO";
            }
            cout << endl;
        }
    }

    return 0;
}
