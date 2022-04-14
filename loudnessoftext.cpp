#include<bits/stdc++.h>
using namespace std;
int main () {

	int b; int uppercase = 0 ;
	cin >> b;
	string s1;
	getline(cin, s1);
	cin.ignore();
	for (int i = 0; i <= s1.size(); i++) {
		if (s1[i] >= 'A' || s1[i] <= 'Z') {
			uppercase++;
		}

	}
	int res = uppercase * b;
	cout << "upp is :" << uppercase << endl;
	cout << res << endl;

}
