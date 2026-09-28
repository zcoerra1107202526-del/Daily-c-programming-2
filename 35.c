#include<stdio.h>
void main()
{
float  d,m,p,fuel,cost;
  clrscr();

    printf("Enter d,m,p respectively:");
    scanf("%f%f%f",&d,&m,&p);

    printf("Enter fuel and cost repetively:");
    scanf("%f%f",&fuel,&cost);

    fuel=d/m;
    cost=fuel*p;

    printf("The fuel required and total travel cost is %f %f respectively",fuel,cost);
getch();
   
}
