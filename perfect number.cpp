#include<stdio.h>
main()
{
	int n,i,sum=0;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
			sum = sum + i;
		}
	}
	if(n==sum)
	printf("it is perfect number");
	else
	printf("it is not a perfect number");
}
