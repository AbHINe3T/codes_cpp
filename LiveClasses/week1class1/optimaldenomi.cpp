
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  ll t;
  cin >> t;

  while (t--) {
    ll n;
    cin >> n;
    ll a[n];
    ll l[n], r[n], m[n];

    // Input
    for (ll i = 0; i < n; i++)
      cin >> a[i];

    if (n == 1)
      cout << 1 << endl;

    else {
      ll temp = 0;

      // for left array
      for (ll i = 0; i < n; i++) {
        l[i] = temp;
        if (temp == 0)
          temp = a[i];
        else
          temp = __gcd(temp, a[i]);
      }


      // for right array
      temp = 0;

      for (ll i = n - 1; i >= 0; i--) {
        r[i] = temp;
        if (temp == 0)
          temp = a[i];
        else
          temp = __gcd(temp, a[i]);
      }

      // saving hcf of left and right in mid

      for (ll i = 0; i < n; i++) {
        if (l[i] == 0)
          m[i] = r[i];
        else if (r[i] == 0)
          m[i] = l[i];
        else {
          m[i] = __gcd(l[i], r[i]);
        }
      }


      ll mx[] = {0, 0};

      for (ll i = 0; i < n; i++) {
        if (m[i] > mx[0]) {
          mx[0] = m[i];
          mx[1] = a[i];
        }
        else if (m[i] == mx[0]) {
          if (a[i] > mx[1])
            mx[1] = a[i];
        }
        //cout << mx[0] << " " << mx[1] << endl;
      }

      int tempValue = 0;
      for (ll i = 0; i < n; i++) {
        if (m[i] == mx[0] && a[i] == mx[1]) {
          temp = i;
          tempValue = m[i];
        }
      }

      a[temp] = tempValue;

      ll sum = 0;

      for (ll i = 0; i < n; i++) {
        //cout << a[i] << " ";
        sum += a[i] / mx[0];
      }

      cout << sum << endl;

    }

  }
  return 0;
}