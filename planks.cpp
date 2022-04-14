#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
#define lt long long
using namespace std;

int main() {
	lt t;
	cin >> t;
	while (t--)
	{
		int n;
		string s;
		cin >> n;
		cin >> s;
		double counts = 0.0;
		for (int i = 0; i < n; i++)
		{
			if (s[i - 1] != s[i]) counts += 0.5;
		}
		cout << floor(counts) << endl;
	}

	return 0;
}