#include<bits/stdc++.h>
using namespace std;

int main()
{
	char str[] = "MCA";
	int i;
	for (i = 0; str[i]; i++)
		printf("\t%c%c%c%c", str[i], *(str + i), *(i + str), i[str]);

}