#include<bits/stdc++.h>
using namespace std;
int factorial (int n) {
	int rs = 1;
	if (n == 1 || n == 0)
		return 1;
	for (int i = 2; i <= n; i++) {
		rs = rs * i;

	}
	return rs;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int number;
		cin >> number;
		cout << factorial(number) << endl;
	}
}