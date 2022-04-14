#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int t;
	cin >> t;
	while (t--) {
		int D, d, P, Q, dollar = 0;
		cin >> D >> d >> P >> Q;
		int parts = ceil(D / d);
		for (int i = 0; i <= parts; i++) {
			dollar += P + (i * Q);
			cout << dollar << endl;
		}


	}
}