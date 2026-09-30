#include<stdio.h>
void main()
{
    int hours,minutes,seconds,total;

    clrscr();

    printf("Enter hours: ");
    scanf("%d",&hours);

    printf("Enter minutes: ");
    scanf("%d",&minutes);

    printf("Enter seconds: ");
    scanf("%d",&seconds);

    total=(hours*3600)+(minutes*60)+seconds;

    printf("Total Seconds = %d",total);

    getch();
}
