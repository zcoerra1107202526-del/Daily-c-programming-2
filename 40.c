#include<stdio.h>
void main()
{
    float price,discount,amount;

    clrscr();

    printf("Enter price: ");
    scanf("%f",&price);

    printf("Enter discount percentage: ");
    scanf("%f",&discount);

    amount=price-(price*discount/100);

    printf("Final Amount = %.2f",amount);

    getch();
}
