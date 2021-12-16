#include<stdio.h>
main()
{
	int a,b,c=0;
	printf("enter a,b values : ");
	scanf("%d%d",&a,&b);
	c=a,a=b,b=c;
	printf("after swapping values are  %d %d",a,b);
	
}
