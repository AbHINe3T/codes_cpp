#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int t ;
	cin >> t;
	int x, y;
	int countw = 0;
	int salry ;
	int result ;
	int streak = 0;
	while (t--) {

		string str;
		cin >> str;
		cin >> x >> y;
		for (int i = 0 ; i <= 30; i++) {
			if (str[i] == '1') {
				countw++;
				streak++;


			}

			else {
				break;
			}
			result = max(result, streak);



		}
		salry = countw * x + streak * y;
		cout << salry << endl;
	}
}