#include<Stdio.h>

void main()

 { char ch;
   int i;
   printf("enter chars: ");
   for(i=1; i<=10 ;i++)
   {
      ch = getch();
      putchar(toupper(ch));
   }


}
