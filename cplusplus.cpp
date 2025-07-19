#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    while(n--) {
        int c; cin >> c;
        int a[c];
        for(int i=0; i<c; i++) {
            cin >> a[i];
        }
        sort(a,a+c);

        int l = a[0], r = a[c-1];
        if((l+r) % 2 == 0) {
            cout << "0" << endl;
            continue;
        }
        int ans1 = 0, ans2 = 0;
        for(int x : a){
            if((x+r) % 2 != 0) ans1++;
            if((x+r) % 2 == 0) break;
        }
        for(int i = c-1; i >= 0; i--){
            if((a[i]+l) % 2 != 0) ans2++;
            if((a[i]+l) % 2 == 0) break;
        }
        int ans = 0;
        if(ans1!=0 && ans2!=0) {
            ans = min(ans1,ans2);
        } else if(ans1==0) {
            ans = ans2;
        } else {
            ans = ans1;
        }
        cout << ans;
        cout << endl;
    }

    return 0;
}

