#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	int coco;
	cin >> t;
	while (t--) {
		int x, y, a, b;
		cin >> x >> y >> a >> b;
		int tA = a / x;
		int tB = b / y;
		coco = tA + tB;

		cout << coco << endl;

	}


}