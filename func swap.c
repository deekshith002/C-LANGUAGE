#include<stdio.h>

int swap(int a,int b);

int main()
{
  int a,b;
  printf("enter a,b values :");
  scanf("%d%d",&a,&b);
  swap(a,b);
}
int swap(int a,int b)
{
  int c;
  c=a;
  a=b;
  b=c;
  printf(" after swapping a=%d b=%d",a,b);

}
