#include<stdio.h>

int square(int a);

int main()
{
  int b,x;
  printf("enter a number : ");
  scanf("%d",&b);
   x= square(b);
   printf("%d",x);



}
int square(int a)
{
  int k;
  k = a*a;
  return k;

}
