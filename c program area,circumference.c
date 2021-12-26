//program to accept radius of the circle and display area and circumference

#include <stdio.h>

void main()

{
    int r;
    float area,circumference;

    //input
    printf("enter the radius of the circle :");
    scanf("%d", &r);

    //process

    area = 3.14*r*r;
    circumference = 3.14*2*r;

    //output

    printf("area = %4.2f , circumference = %4.2f", area,circumference);
    return 0;


}
