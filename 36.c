#include<stdio.h>
void main()
{
  int price,discount,discountamount,finalprice;
clrscr();

printf("Enter price:");
scanf("%d",&price);

printf("Enter discount percentage: ");
    scanf("%d",&discount);

    discountamount = (price * discount) / 100;
    finalprice = price - discountamount;

    printf("\nDiscount Amount = %.2d",discountamount);
    printf("\nFinal Price = %.2d",finalprice);

    getch();
}
