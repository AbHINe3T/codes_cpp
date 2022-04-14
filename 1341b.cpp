#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int a[n];
		for (int i = 0; i < n; i++) cin >> a[i];

		int peaks = 0;
		for (int i = 1; i < k - 1; i++) {
			if (a[i] > a[i - 1] && a[i] > a[i + 1])peaks++;

		}
		int maxpeak = peaks;
		int ind = 0;
		int l = 0, r = k - 1;
		while (r <= n - 2) {
			if (a[r] > a[r - 1] && a[r] > a[r + 1])peaks++;
			r++;

			l++;
			if (a[l] > a[l - 1] && a[l] > a[l + 1])peaks--;

			if (peaks > maxpeak) {
				maxpeak = peaks;
				ind = l;
			}

		}

		cout << maxpeak << " " << ind + 1 << endl;

	}

}


