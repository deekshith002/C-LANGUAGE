#include<Stdio.h>

void main()

 { char ch;
   int i;
   printf("enter a character : ");
   ch = getche();
   if(isupper(ch))
   printf("\nupper case");
   else
   if(islower(ch))
   printf("\nlower case");
   else
   if(isdigit(ch))
   printf("\ndigit");
   else
   printf("\nother ");



}
