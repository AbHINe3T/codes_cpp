#include<bits/stdc++.h>
using namespace std;
bool even(int n)
{
	if (n % 2 == 0) {return true;}
	else {return false;}
}
int main ()
{
	int t;
	cin >> t;
	int skilla = 0, skillb = 0;
	while (t--) {
		int a, b, p, q;

		cin >> a >> b >> p >> q;
		for (int i = 1; i < (p / a) + (q / b); i++) {
			if (even(i)) {
				skillb += b;
			}
			else {
				skilla += a;

			}
		}
		if (skilla == p && skillb == q) {
			cout << "YES" << endl;

		}
		else
			cout << "NO" << endl;

	}
}