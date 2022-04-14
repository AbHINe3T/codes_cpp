#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, m;
	int flag;
	cin >> n >> m;
	int arr[n];
	cout << m;
	for (int i = 0 ; i < n ; i++)
	{
		cin >> arr[i];
		cout << arr[i] << " ";



	}

	while (m--) {
		cout << m << "\n";
		int q;
		cin >> q;
		cout << "query is " << q << endl;
		for (int i = 0; i <= n; i++)
			if (arr[i] == q)
				flag = 1;
			else
				flag = 0;

		if (flag == 1) {
			cout << "YES" << "\n";
		}
		else {
			cout << "NO" << "\n";
		}
	}


}