#include<bits/stdc++.h>
using namespace std;
int main() {
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		int sum = 0;
		for (i = 0; i < n; i++) {
			int x;
			cin >> x;
			if (x < 0) {
				x = round(sum / i);
				sum += x;
				cout << x << " ";
			}
		} cout << endl;
	}
	return 0;
}