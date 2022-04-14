#include<bits/stdc++.h>
using namespace std;
define long long ll
int factorial (int n) {
	ll rs = 1;
	if (n == 1 || n == 0) {return 1;}

	for (int i = 2; i <= n; i++) {
		rs = rs * i;

	}
	return rs;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int number;
		cin >> number;
		cout << factorial(number) << endl;
	}
}