#include<iostream>
using namespace std;
int main ()
{
	int n, m;
	cout << "Enter the Number of Items:" << endl;
	cin >> n;
	cout << "Enter the knapsack Weight:" << endl;
	cin >> m;
	int p[n];
	int wt[n];
	cout << "Enter the Profit:" << endl;
	for (int i = 0; i < n; i++)cin >> p[n];
	cout << "Enter the Weights:" << endl;
	for (int i = 0; i < n; i++)cin >> wt[n];
	int k[n][m];
	for (int i = 0; i <= n; i++) { // for ROWS "n";
		for (int w = 0; w <= m; w++)// for Columns "m";
		{
			if (k == 0 || w == 0) {
				k[i][w] = 0;
			}
			else if (wt[i] <= w)
				k[i][w] = max(p[i] + k[i - 1][w - wt[i]], k[i - 1][w]);
			else
				k[i][w] = k[i - 1][w];


		}



	}
	cout << k[n][w];




}