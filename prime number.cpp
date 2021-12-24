#include<stdio.h>
main()
{
	int n,i,flag=1;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		flag = 0;
	}
	if(flag==1)
	printf("it is prime number");
	else
	printf("it is not a prime number");
}
