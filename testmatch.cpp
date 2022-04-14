#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int t;
	cin >> t;
	while (t--) {
		int Wi = 0, We = 0, draw = 0;
		int arr[5];
		for (int i = 0; i < 5; i++) {
			cin >> arr[i];
			if (arr[i] == 1) {Wi++;}
			else if (arr[i] == 2) {We++;}
			else {
				draw++;
			}
		}
		if (Wi > We) {cout << "INDIA" << endl;}
		else if (We > Wi) {cout << "ENGLAND" << endl;}
		else {cout << "Draw" << endl;}
	}

}