//program to accept marks in two subjects and display grade based on the following

#include <stdio.h>

void main()

{

 int maths,physics;
 printf("enter the marks of maths and physics :");
 scanf("%d%d", &maths, &physics);

 if(maths>80 && physics>80)
 printf("grade a");

 else
 if(maths>80 && physics<80)
 printf("grade b");

 else
 if(maths<80 && physics>80)
 printf("grade c");

 else
 printf("grade d");


}
