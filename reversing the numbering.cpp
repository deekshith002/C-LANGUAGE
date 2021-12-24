#include<stdio.h>
main()
{
	int n,k,sum=0;
	printf("enter a number:");
	scanf("%d",&n);
	while(n>0)
	{
	   k = n%10;
	   printf("%d",k);
	   n=n/10;
	}

}
