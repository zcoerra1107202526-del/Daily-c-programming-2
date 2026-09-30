#include<stdio.h>
void main()
{
    float basic,da,ta,gross;

    clrscr();

    printf("Enter basic salary: ");
    scanf("%f",&basic);

    printf("Enter DA: ");
    scanf("%f",&da);

    printf("Enter TA: ");
    scanf("%f",&ta);

    gross=basic+da+ta;

    printf("Gross Salary = %.2f",gross);

    getch();
}
