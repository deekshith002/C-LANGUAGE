#include<stdio.h>
main()
{
	int n,i=1,fac=1;
	printf("enter the number: ");
	scanf("%d",&n);
	while(i<=n)
	{
		fac = fac*i;
	    i++;	
	}
	printf("%d",fac);
}
