#include<stdio.h>
void main()
{
  int l,b,h,volume,litre;
clrscr();
printf("Enter length in metres:");
scanf("%d",&l);

printf("Enter breadth in metres:");
scanf("%d",&b);

printf("Enter height in metres:");
scanf("%d",&h);

volume=l*b*h;
   litre = volume * 1000;

    printf("\nTank Volume = %.2d cubic metres",volume);
    printf("\nTank Capacity = %.2d litres",litre);

    getch();
}
