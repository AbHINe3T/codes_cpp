#include<bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin >> t;
	while (t--) {
		int n, p, x, w = 0;
		cin >> n >> x >> p;
		w = n - x;
		int ts = (x * 3) - w;
		if (ts >= p) {
			cout << "pass" << endl;
		}
		else
			cout << "fail" << endl;
	}
}
