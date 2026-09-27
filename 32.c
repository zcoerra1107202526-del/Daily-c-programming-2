#include<stdio.h>

void main()
{
    int q1,q2;
    int p1,p2,cost1,cost2,total;

    clrscr();

    printf("Enter quantity of first item: ");
    scanf("%d",&q1);

    printf("Enter price of first item: ");
    scanf("%d",&p1);

    printf("Enter quantity of second item: ");
    scanf("%d",&q2);

    printf("Enter price of second item: ");
    scanf("%d",&p2);

    cost1 = q1 * p1;
    cost2 = q2 * p2;
    total = cost1 + cost2;

    printf("\nCost of first item = %.2d",cost1);
    printf("\nCost of second item = %.2d",cost2);
    printf("\nTotal Bill = %.2d",total);

    getch();
}
