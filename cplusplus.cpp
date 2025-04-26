#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	
	int max_val = a;
	if(b > max_val) max_val = b;
	if(c > max_val) max_val = c;
	if(d > max_val) max_val = d;
	
	int min_val = a;
	if(b < min_val) min_val = b;
	if(c < min_val) min_val = c;
	if(d < min_val) min_val = d;
	
	cout << "min: " << min_val  << ", max: " << max_val << endl;
	return 0;
}
