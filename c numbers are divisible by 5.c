#include <stdio.h>

void main()
{
   int a,b;

     // Input
     printf("Enter the two numbers :");
     scanf("%d%d", &a,&b);

    if(a%5==0 && b%5==0)
        printf("both are divisible by 5");
    else
    if(a%5==0 && b%5!=0  )
        printf("only a is divisible by 5");
    else
    if(b%5==0 && a%5!=0)
        printf("only b is divisible by 5");
    else
        printf("both are not divisible by 5 ");
}
