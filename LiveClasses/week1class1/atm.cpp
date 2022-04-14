#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main() {
	int amount;
	double initialbal, rembal;
	cin >> amount;
	cin >> initialbal;
	if ((amount + 0.50) > initialbal || amount % 5 != 0) {
		cout << fixed;
		cout << setprecision(2) << initialbal << endl;

	}
	else {
		cout << fixed;

		rembal = (initialbal - amount) - 0.50;
		cout << setprecision(2) << rembal;
	}
}