//program number 2
//Abhineet Kumar
//Gcc compiler
// objective - Program to test whether a given identifier is valid or not valid

#include<stdio.h>
#include<ctype.h>
int main()
{
	char a[10];
	int flag, i = 1;
	while (a[i] = '\0')
	{
		if (!isdigit(a[i]) && !isalpha(a[i]))
		{
			flag = 0;
			break;
		}
		i++;

	}
	if (flag == 1)
		printf("\n Valid identifier");
	else
		printf("\n Not a valid identifier");
	return 0;

}
