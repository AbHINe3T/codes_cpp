#include<bits/stdc++.h>
using namespace std;
int main()
{	int n, q;
	int pre[n];
	int arr[1000];
	for (int i = 0; i < n; i++) {
		if (i == 0)
			pre[i] = arr[0];
		else
			pre[i] = pre[i - 1] + arr[i];
	}

	cin >> q;
	while (q--) {
		int l, r;
		cin >> l, r;
		int sum = pre[r];
		if (l - 1 >= 0) {
			sum = sum - pre[l - 1];
		}

		cout << sum << endl;
	}
}
