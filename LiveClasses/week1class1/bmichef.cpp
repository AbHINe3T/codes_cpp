#include<bits/stdc++.h>
using namespace std ;
int bmic(int mass, int he) {
	int result = mass / (he * he);
	return result;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		int m, h, bmi;
		cin >> m >> h;
		bmi = bmic(m, h);

		if (bmi <= 18)
			cout << "1" << endl;
		if (bmi <= 24 && bmi >= 19)
			cout << "2" << endl;
		if (bmi <= 29 && bmi >= 25)
			cout << "3" << endl;
		if (bmi >= 30)
			cout << "4" << endl;





	}
}