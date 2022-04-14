#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
	// Corner case
	if (n <= 1)
		return false;

	// Check from 2 to n-1
	for (int i = 2; i < n; i++)
		if (n % i == 0)
			return false;

	return true;
}

int main() {
	int t;
	cin >> t;
	int count = 0;
	while (t--) {
		int x, y;
		cin >> x >> y;
		while (x <= y) {
			if (isPrime(x + 2)) {count++; x = x + 2;}
			else
				count++; x = x + 1;
		}

		cout << count << endl;

	}
}