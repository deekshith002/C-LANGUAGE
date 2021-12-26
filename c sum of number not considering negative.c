#include <stdio.h>

void main()
{
  int num,i, sum = 0;


     for(i = 1 ; i<=10 ; i ++)
     {
         printf("Enter a number[0 to stop] :");
         scanf("%d",&num);
         if(num<0)
         continue;
         if(num==0)
         break;
         sum +=num;
     }

         printf("sum = %d ", sum);


}
