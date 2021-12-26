#include <stdio.h>

void main()
{
  int num,i, sum = 0,count=0;

     for( ; ;) //while(1)
     {
         printf("Enter a number[0 to stop] :");
         scanf("%d",&num);
         if(num==0)
         break;
         if(num > 0)
         {
         sum +=num;
         count++;
         }

     }
         printf("sum = %d and avg = %d", sum,sum / count);


}
