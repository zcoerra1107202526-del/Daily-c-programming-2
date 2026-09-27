#include<stdio.h>

void main()
{
    int d1,d2,t1,t2,totald,totalt,avg;

    clrscr();

    printf("Enter first distance: ");
    scanf("%d",&d1);

    printf("Enter second distance: ");
    scanf("%d",&d2);

    printf("Enter first time: ");
    scanf("%d",&t1);

    printf("Enter second time: ");
    scanf("%d",&t2);

    totald = d1 + d2;
    totalt = t1 + t2;
    avg = totald / totalt;

    printf("\nTotal Distance = %.2d",totald);
    printf("\nTotal Time = %.2d",totalt);
    printf("\nAverage Speed = %.2d",avg);

    getch();
}
