#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--) {
		int x, y, k;
		int dis = 00;
		cin >> x >> y >> k;
		dis = (((0 - x) ^ 2) + ((0 - y) ^ 2));
		dis *= dis;
		if (dis % k == 0) {cout << "YES" << endl;}
		else {
			cout << "NO" << endl;
		}


	}
}