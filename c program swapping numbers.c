//program to swap numbers

#include <stdio.h>

void main()

{
   int a,b,temp;
   printf("enter the two numbers :");
   scanf("%d%d", &a,&b);

  temp=a;
  a=b;
  b=temp;

   printf(" the two numbers are : %d %d", a,b);

}
