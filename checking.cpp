#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int count = 0;
    int a, b;
    cin >> a >> b;
    int counta = a; int countb = b;
    while (counta <= countb) {
        count++;
        counta = counta * 3;
        countb = countb * 2;
    }
    cout << count << endl;
}