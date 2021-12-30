#include<stdio.h>
main()
{
	int n,count = 0,k;
	printf("enter a number :");
	scanf("%d",&n);
	while(n>0)
	{
    count = ++count;
    printf("%d",count);
	printf("enter a number :");
	scanf("%d",&n);
	}
	printf("%d",count);
}
