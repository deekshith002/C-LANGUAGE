#include<stdio.h>

void main()

{    int alpha=0,other=0,i;
     char ch;
     printf("enter chars :");
     for(i=1;i<=5; i++)
     {
     ch = getche();
     if(ch>= 65 && ch<=90 || ch>= 97 && ch<=122) //if(isalpha(ch))
     alpha++;
     else
     other++;
     }
     printf("\n%d\n",alpha);
     printf("%d",other);

}
