//program to calculate total amount with 10% discount and 8% tax

 #include <stdio.h>

 void main()

 {
     int price,discount,tax,totalamount,netprice;


    //input
    printf("enter the price :");
    scanf("%d", &price);

    //process
    discount = price*10 / 100;
    netprice = price - discount;
    tax = netprice * 8 / 100;
    totalamount = netprice+tax;


    //output

     printf("selling price   :%5d\n", price);
     printf("- discount      :%5d\n", discount);
     printf("                  --------\n");
     printf("net price       :%5d\n", netprice);
     printf("tax             :%5d\n", tax);
     printf("               ---------\n");
     printf(" total amount   :%5d\n", totalamount);

      }
