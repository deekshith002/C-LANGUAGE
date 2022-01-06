#include<stdio.h>
main()
{
	int a,b,n,rem=0;
	printf("enter values");
	scanf("%d%d",&a,&b);
	n = a/b; 
	rem = a-b*n;
	printf("%d",rem);
}
