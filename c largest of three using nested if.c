//largest of three numbers using nested if

#include<stdio.h>

void main()

{
  int a,b,c;
  printf("enter the three numbers :");
  scanf("%d%d%d", &a,&b,&c);
if(a>b)
  {
    if(a>c)
    printf("greatest number : %d" ,a );
    else
    printf("greatest number : %d" ,c);
  }
else
  {
  if(b>c)
  printf("greatest number :%d" ,b);
  else
  printf("greatest number :%d" ,c);

  }
}
