#include<stdio.h>

void main()

{
     char ch;
     printf("enter a alpha :");
     ch = getchar(); //getche();

     if(ch>= 65 && ch<=90)
     printf("uppercase");
     else
     if(ch>= 97 && ch<=122)
     printf("lowercase");

}
