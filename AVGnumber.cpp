#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--) {
		int sumn = 0, sumk, n, k, m, count;
		//N= no of positive integers
		//K= sequence his bro deleted
		//V= aritematic mean of N+K;
		cin >> n >> k >> m;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[n];
			sumn += arr[n];
			count++;
		}
		sumk = m * (n + k) - sumn;
		int vk = sumk / k;
		if (vk > 0 && ((m * (n + k) - sumn) % k) == 0) cout << vk << endl;
		else cout << "-1" << endl;





	}
}