//program to calculate net price with 10% discount


#include <stdio.h>

void main()


{
    int n, discount,price,netprice;

    //input

    printf("enter the price:");
    scanf("%d", &n);

    //process

    discount=n*10/100;
    netprice=(n-discount);

    //output

    printf("net price = %d", netprice);







}
