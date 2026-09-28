#include<stdio.h>
void main()
{
    float r,area,circumference;
clrscr();
    printf("Enter radius:");
    scanf("%f",&r);

    area=3.14*r*r;
    circumference=2*3.14*r;

    printf("Area and circumference are %f %f respectively",area,circumference);
  getch();
}
