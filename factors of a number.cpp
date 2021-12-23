#include<stdio.h>
main()
{
	int n,i=1;
	printf("enter a number :\n");
	scanf("%d",&n);
	printf("factors are :");
	while(i<=n)
	{
		if(n%i==0)
		printf(" %d ",i);
		i++;
	}
}
