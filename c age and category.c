#include <stdio.h>

void main()
{
   int age;

     // Input
     printf("Enter age :");
     scanf("%d", &age);

    if(age<12)
        printf("child");
    else
    if(age<30)
        printf("young");
    else
    if(age<50)
        printf("middle age");
    else
        printf("old");
}
