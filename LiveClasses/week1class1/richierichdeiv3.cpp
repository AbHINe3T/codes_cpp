#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--) {
		int a, b, x;
		cin >> a >> b >> x;
		int result = (b - a) / x;
		cout << result << endl;
	}
}