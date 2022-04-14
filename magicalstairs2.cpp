#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isprime(int x, int y)
{
    if (x > y)
        return false;

    int count = 0;
    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
            count++;
    }
    if (count == 2)
        return true;
    else
        return false;
}

int main() {
    int t; cin >> t;
    while (t--)
    {
        int x, y, steps = 0;
        cin >> x >> y;

        for (; x < y;) {

            if (x < isprime(x + 2, y))
            {
                x += 2; steps++;
            }
            else
            { x++; steps++;}
        }
        cout << steps << "\n";

    }

    return 0;
}