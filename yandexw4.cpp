#include <bits/stdc++.h>
using namespace std;
bool compare(string a, string b)
{
	return (a + b < b + a);
}

string lexSmallest(string a[], int n)
{
	sort(a, a + n, compare);

	string answer = "";
	for (int i = 0; i < n; i++)
		answer += a[i];

	return answer;
}

// Driver code
int main()
{
	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	string a[] = { s1, s2, s3 };
	int n = sizeof(a) / sizeof(a[0]);
	cout << lexSmallest(a, n);
	return 0;
}