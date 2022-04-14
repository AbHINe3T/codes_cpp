#include<bits/stdc++.h>
using namespace std;
int main ()
{

	int a[1000], l = 0, r = 1, sum = 0, target;
	cin >> target;
	for (int i = 0; i < 1000; i++) {
		cin >> a[i];


	}
	for (int i = 0; i <= r - l; i++) {
		sum = a[l] + a[r];
		if (sum == target) {
			cout << l << " " << r << endl;
		}
		else {
			r++;

			sum = sum + a[r];
			sum -= a[l];
			l++;
		}

	}
}
