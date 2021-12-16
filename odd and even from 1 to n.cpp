#include<stdio.h>
main()
{
	int i,n;
	printf("enter n value:");
	scanf("%d",&n);
	for(i=0;i<=n;i=i+2)
	{
	   printf("%d\t",i);	
	}	
	printf("\n\n");
    for(i=1;i<=n;i=i+2)
	{
	   printf("%d\t",i);	
	}	
}
