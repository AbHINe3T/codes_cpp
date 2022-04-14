#include<bits/stdc++.h>
using namespace std;
int main () {
	int t; cin >> t;
	int moves = 0;
	while (t--) {
		int x, y;

		cin >> x >> y;
		if (x < y) {
			x = x + 2;
			moves++;
		}
		else {
			x = x - 1;
			moves++;
		}
		cout << moves << endl;

	}

}