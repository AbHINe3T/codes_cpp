//program 1
//Abhineet Kumar
//Gcc compiler
//objective - Program to identify whether a given line is a comment or not

#include<stdio.h>
#include<string.h>
int main()
{
	char com[30];
	int i, a = 0;
	printf("\n Enter the String \n");
	gets(com);
	if (com[0] == '/')
	{
		if (com[1] == '/')
			printf("\n This is a Comment");
		else if (com[1] == '*')
		{
			for (i = 2; i <= 30; i++)
			{
				if (com[i] == '*' && com[i + 1] == '/')
				{
					printf("\n it is comment");
					a = 1;
					break;
				}
				else
					continue;

			}
			if (a == 0)
				printf("\n it is not a comment");
		}
		else
			printf("\n it is not a comment ");
	}
	else
		printf("\n it is not a comment");
	return 0;

}

