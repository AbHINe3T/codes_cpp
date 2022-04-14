#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int arr[n + 1];
		bool yes = 0;
		for (int i = 1; i < n; i++) {
			if (arr[i] % arr[i + 1] == 0)
				yes = 1;
		}
		else
			yes = 0;

	}
	if (yes) {
		for (int i = 0; i < n; i++) {
			cout << arr[i];
		}
		else
			cout << "- 1" << endl;
	}
}