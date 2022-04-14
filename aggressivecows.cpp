#include<bits/stdc++.h>
using namespace std;
bool canPlaceCows(int arr, int n, int cows, int dist) {
	int coordinate = arr[0];
	int count = 1;
	for (int i = 1; i < n; i++) {
		if (arr[i] - coordinate) {
			count++;
			coordinate = arr[i];
		}
		if (count == cows) {
			return true;
		}
		return false;
	}
}
int main ()
{
	cout << "Enter The Number of Stalls" << endl;
	int n;
	int cow;
	int a[n];
	cout << "Enter The Number of COWS" << endl;
	cin >> cow;
	cout << "Enter the Coordinate of Stalls Number" << endl;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int low = 1;
	int res;
	int high = a[n - 1] - a[0];
	int mid = (low + high) >> 1;
	while (low <= high) {
		if (canPlaceCows(a, n, cow, mid)) {
			res = mid;
			low = mid + 1;
		}
		else
			high = mid - 1;
	}
	cout << "The Longest minimal Distance is:" << res << endl;
}