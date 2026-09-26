#include<stdio.h>
void main()
{
    int u,d,total;

    clrscr();

    printf("Enter units per day: ");
    scanf("%d",&u);

    printf("Enter number of days: ");
    scanf("%d",&d);

    total = u * d;

    printf("Total units consumed = %d",total);

    getch();
}
