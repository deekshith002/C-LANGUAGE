#include<stdio.h>
void main()

{
 int num,i,totalfactors=0;
 printf("enter a numbers :");
 scanf("%d", &num);

 for(i=2; i<=num/2 ; i++)
 {
   if(num % i == 0)
   totalfactors++;

 }
 printf("total factors   : %d",totalfactors );


 }
