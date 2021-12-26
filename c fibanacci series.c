//fibanacci series means a number should be equal to sum of two previous numbers
#include<Stdio.h>

void main()

{
  int a = 0 ,b = 1,c,n;
  printf("%2d%2d",a,b);

  for(n = 1; n<=8 ; n++)
  {
    c = a+b;
    printf(" %d ", c);
    a = b;
    b = c;
  }



}
