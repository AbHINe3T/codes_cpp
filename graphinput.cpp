//using adjency matrix
#include<bits/stdc++.h>

using namespace std;
int main () {
	int n, m;
	cout << "Enter the Node Followed by edge" << endl;
	cin >> n >> m;
	int adj[n + 1][n + 1]; //adjency matrix with n+1 nodes.
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		adj[u][v] = 1;
		adj[v][u] = 1;

	}
	return 0;
}