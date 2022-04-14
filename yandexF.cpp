#include<bits/stdc++.h>
using namespace std;
int main () {
	int a1, a2, a3, a4;
	int b1, b2, b3;
	cin >> a1 >> a2 >> a3 >> a4;
	int suma = a1 + a2 + a3 + a4;
	cin >> b1 >> b2 >> b3;
	int sumb = b1 + b2 + b3;
	cout << suma - sumb << endl;
}