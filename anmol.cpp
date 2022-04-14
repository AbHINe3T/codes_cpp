#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int x, y, w = 0, max = 0, t = 0;
        cin >> x >> y;
        string s;
        cin >> s;
        for (int i = 0; i < 30; i++)
        {
            if (s[i] == '1')
            {
                w++;
                if (s[i + 1] == '1')
                    max++;
                else
                {
                    if (t < max + 1) {
                        t = max + 1;
                    }
                    max = 0;
                }
            }
        }
        int res = w * x + t * y;
        cout << res << endl;
    }
    return 0;
}