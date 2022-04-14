#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int t;
	cin >> t;
	while (t--) {
		int sunny = 0, rainy = 0;
		int arr[7];
		for (int i = 0; i < 7; i++) {
			cin >> arr[i];
			if (arr[i] == 1) {sunny++;}
			if (arr[i] == 0) {rainy++;}
		}
		if (sunny > rainy) {cout << "YES" << endl;}
		else cout << "NO" << endl;

	}
}