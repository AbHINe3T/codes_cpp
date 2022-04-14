#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int d, x, y, z, result;
		cin >> d >> x >> y >> z;
		int s1, s2;
		s1 = x * 7;
		s2 = (y * d) + z * (7 - d);
		cout << max(s1, s2) << endl;

	}
}