#include<bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;
int32_t main ()
{
	ios::sync_with_stdio(fasle); cin.tie(0);
	ll t;
	cin >> t;
	while (t--) {
		ll n;
		vector<ll> a(n);
		for (ll i = 0; i < n; i++)cin >> a[i];
		ll biggest = *max_element(a.begin(), a.end());
		ll ans = 0 ;
		for (auto x : a ) {
			ans = max (ans, biggest - x);
		}

		cout << ans << endl;
	}
	return 0;
}
