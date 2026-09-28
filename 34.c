#include<stdio.h>
void main()
{
    float a,b,c,d,total,average;
clrscr();
    printf("Enter a,b,c,d:");
    scanf("%f%f%f%f",&a,&b,&c,&d);

    total=a+b+c+d;
    average=total/4;

    printf("Total and average are %f %f respectively",total,average);
  getch();
}
