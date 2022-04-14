#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		int bites = 0;
		cin >> n >> k;
		if ((n % k) == 0) {
			bites = n / k;
			cout << bites << endl;

		}
		else
			cout << "-1" << endl;
	}
	return 0;
}
