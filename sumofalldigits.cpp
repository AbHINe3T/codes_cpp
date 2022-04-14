#include<iostream>
using namespace std;
int getSum(int n)
{
	int sum = 0;
	for (sum = 0; n > 0; sum += n % 10, n /= 10)
		;

	return sum;
}
int main()
{
	int t; cin >> t;
	while (t--) {
		int n;
		cin >> n;
		cout << getSum(n) << endl;

	}
	return 0;
}



