#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;


		string ans = "success" ;
		if (s.size() <= 3) {
			ans = "error";
		}
		else if (s[0] != '<' || s[1] != '/') {
			ans = "error";

		}
		else if (s[s.size() - 1] != '>') {
			ans = "error";
		}
		else {
			for (int i = 2; i < s.size() - 1; i++) {
				if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')) {
					ans = "error";
				}
			}
		}
		cout << ans << endl;
	}
}