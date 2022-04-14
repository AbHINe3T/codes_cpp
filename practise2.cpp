//coursera_permiter
#include<bits/stdc++.h>
using namespace std;
int main () {
	int a, b, c;
	cin >> a >> b;
	c = pow((a ^ 2) + (b ^ 2), (0.5));
	cout << c << endl;
	int p = a + b + c;
	cout << p << endl;
}
