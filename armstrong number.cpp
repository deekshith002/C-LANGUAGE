#include<stdio.h>
main()
{
	int n,k,sum=0,i;
	printf("enter a number:");
	scanf("%d",&n);
	i=n;
	while(n>0)
	{
		 k = n%10;
		 sum = k*k*k + sum ; 
		 n= n/10;
	}
	if(i==sum)
	printf("it is arm strong number ");
	else
	printf("it is not arm strong number");
}
