//accept input and calculate area according to the input(circle,rectangle,square)

#include<stdio.h>

void main()

{
  int n,r,s,l,b,area;
  printf("enter the n :");
  scanf("%d", &n);

if(n==1)
  {
    printf("enter the radius :");
    scanf("%d", &r);
    area = 3.14*r*r;
    printf("area = %d", area);
  }
else
  if(n==2)
  {
  printf("enter the length of side :" );
  scanf("%d", &s);
  area = s*s;
  printf("area = %d", area);

  }

else
  if(n==3)
  {

  printf("enter length and breadth :");
  scanf("%d%d", &l,&b);
  area = l*b;
  printf("area = %d", area);
  }

}
