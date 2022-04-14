#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int i, j, k, l;
    int row; cin >> row ;

    for (i = 1; i <= row; i++)
    {
        for (j = row; j > i; j--)
        {

        }
        for (k = i; k >= 1; k--)
        {
            printf("%d", k);
        }
        for (l = 2; l <= i; l++)
        {
            printf("%d", l);
        }
        printf("\n");
    }

    return 0;
}