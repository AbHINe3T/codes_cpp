#include<iostream>
using namespace std;
int main () {

	int a, b, c;
	cin >> a >> b >> c;
	a = (double)a;
	b = (double)b;
	c = (double)c;
	double d = (b * b) - (4 * a * c);
	double q = sqrt(d);
	double roots =  ((-1 * b) + q) / (2 * a);
	cout << setprecision(2) << roots << endl;
}