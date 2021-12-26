#include<stdio.h> \\here even mutliple if is use we dont use "else" in between because its should cross check every statement and declare the largest
void main()

{
  int a,b,c,d,largest;
  printf("enter the four numbers :");
  scanf("%d%d%d%d", &a,&b,&c,&d);
  largest = a;
  if(b>largest)
  largest = b;
  if(c>largest)
  largest = c;
  if(d>largest)
  largest = d;

  printf("greatest number :%d", largest);



}
