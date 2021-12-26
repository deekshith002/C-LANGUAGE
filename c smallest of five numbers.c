#include <stdio.h>

void main()
{
  int num,i,smallest;
  printf("enter a number :");
  scanf("%d", &smallest);

     for(i = 1 ; i <=4 ; i ++)
     {
         printf("Enter a number :");
         scanf("%d",&num);
         if(num<smallest)
         smallest = num;

     }
     printf("%d", smallest);
}
