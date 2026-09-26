#include<stdio.h>
void main()
{
    int l,b,area,perimeter;

    clrscr();

    printf("Enter length: ");
    scanf("%d",&l);

    printf("Enter breadth: ");
    scanf("%d",&b);

    area = l * b;
    perimeter = 2 * (l + b);

    printf("Area = %.2d",area);
    printf("\nPerimeter = %d",perimeter);

    getch();
}
