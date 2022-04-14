#include<bits/stdc++.h>
using namespace std;
int main() {
	int T;
	cin >> T;
	while (T--) {
		int a, x, b, y, c, z;
		cin >> a >> x >> b >> y >> c >> z;
		if (x >= a && y >= b && c >= z) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
}