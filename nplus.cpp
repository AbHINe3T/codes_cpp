#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cout << "1 ";
		for (int i = 0 ; i < n; i++) {
			cout << (1ll << i) << " ";

		}
		cout << "\n";

	}
	return 0;
}