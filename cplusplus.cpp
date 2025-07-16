#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	while(n--) {
		int c; cin >> c; 
        queue<int> q;
		int a[c], b[c];
        for(int i=0; i<c; i++) cin >> a[i];
        for(int i=0; i<c; i++) cin >> b[i];

        for(int i=0; i<c; i++) {
            q.push(a[i]);
            q.push(b[i]);
        }

        while(!q.empty()) {
            int x = q.front();
            q.pop();
            //cout << x << " ";
            int y = q.front();
            q.pop();
            cout << y - x << " ";
            if(q.front() < y) { 
                q.front() = y;
            }
        }
        cout << endl;
	}
	
    return 0;
}
