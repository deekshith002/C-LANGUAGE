#include<stdio.h>
main()
{
	int i,j;
	char ch;
	ch = 'a';
	for(i=1;i<=6;i++)
	{
		printf("\n");
		for(j=1;j<=i;j++)
		{
			printf(" %c ",ch);
		}
		ch = ++ch;
	}
}

