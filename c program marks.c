// program to accept marks in two subjects and siplay total and average

#include <stdio.h>

void main()

{


   int a,b,totalmarks,average;

   //input
   printf("enter the marks of maths and science : ");
   scanf("%d%d", &a, &b);

   //process

    totalmarks = a+b;
    average= totalmarks/2;

   //output

   printf("total marks = %d , average = %d ", totalmarks ,average);

}
