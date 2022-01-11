#include<stdio.h>

int fact(int b);

int main()
{
  int k,a;
  printf("enter a number :");
  scanf("%d",&a);
  k = fact(a);
  printf("%d",k);
}
int fact(int b)
{
  int fac = 1,i;
  for(i=1;i<=b;i++)
  {
   fac = fac * i ;
  }
  return fac;
}
