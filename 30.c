#include<stdio.h>
void main()
{
int d,f,mileage;
clrscr();
   
    printf("Enter distance: ");
    scanf("%d",&d);

    printf("Enter fuel consumed: ");
    scanf("%d",&f);

    mileage = d / f;

    printf("Mileage = %.2dkm/l",mileage);

 getch();
}
