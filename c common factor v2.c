#include <stdio.h>

void main()
{
  int a,b,i,smallest;
         printf("Enter a number :");
         scanf("%d%d",&a,&b);

     smallest = a>b ? a:b;
     for(i = 2 ; i <=smallest/2 ; i ++)
     {
         if(a % i == 0 && b % i ==0)
         printf(" %d ", i);
     }
}
