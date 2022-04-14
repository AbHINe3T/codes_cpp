#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int c, g, result;
		cin >> g >> c;
		result = (c * c) / (2 * g);
		cout << result << endl;
	}
}
