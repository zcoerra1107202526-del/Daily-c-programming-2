#include<stdio.h>
void main()
{
    int a,b,c,d,sum,pro;
clrscr();
    printf("Enter a:");
    scanf("%d",&a);

     printf("Enter d:");
    scanf("%d",&d);

    sum=a+d;

    printf("Sum of First and last num is %d\n",sum);

     printf("Enter b:");
    scanf("%d",&b);

     printf("Enter c:");
    scanf("%d",&c);


    pro=c*b;

    printf("pro of middle two num is %d\n",pro);

    pro=a*b*c*d;

    printf("pro of all four num is %d\n",pro);
getch();
    
}
